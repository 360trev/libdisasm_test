#include <stdio.h>
#include <string.h>
#include "libdis.h"

void dump_x86(unsigned char *buf, uint32_t rva, int st_size);

void dump_x86(unsigned char *buf, uint32_t rva, int st_size)
{
	int i = 0, n, size;
	x86_insn_t curr_inst;
	char line[80];

	x86_init( opt_none, NULL, NULL );
	while (i < st_size)
	{
		printf("%p:\t", buf+i);
		size = x86_disasm( buf, st_size, rva, i, &curr_inst );

		if (size) {
			for (n = 0; n < 12; n++) {
				if (n < size)
					printf("%02X ", buf[i + n]);
				else
					printf("   ");
			}

			x86_format_insn( &curr_inst, line, 80, intel_syntax );
			printf( "%s\n", line );
			i += size;
		} else {
//			printf("invalid opcode %02X\n", buf[i]);
			i++;
			break;
		}
	}
	x86_cleanup();
}
