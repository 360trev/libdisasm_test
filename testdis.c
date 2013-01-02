#include <stdio.h>
#include <string.h>
#include "libdis.h"

extern void dump_x86(unsigned char *buf, uint32_t rva, int st_size);

int main(int argc, char *argv[])
{
	dump_x86((unsigned char *)&main, (uint32_t)&main, 70);
	printf("\ndone.\n");

	dump_x86((unsigned char *)&printf, (uint32_t)&printf, 70);

	return 0;
}
