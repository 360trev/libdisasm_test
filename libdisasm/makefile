# makefile

DEBUG   =@
RM      =del
CC      =gcc
ECHO    =@echo
CFLAGS  =-Wall -O3 -DWIN32
LDFLAGS =-shared --out-implib

EXE     =libdisasm.dll
SRC     =$(notdir $(foreach dir, ., $(wildcard $(dir)/*.c)))
LIBS    =


include makefile.common
