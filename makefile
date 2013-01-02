# makefile for client

DEBUG   =@
RM      =del
CC      =gcc
ECHO    =@echo
MAKE    =make
CFLAGS  =-Wall -D_WIN32_
LDFLAGS =-s

EXE     =testdis.exe
SRC     =$(notdir $(foreach dir, ., $(wildcard $(dir)/*.c)))
LIBS    =libdisasm.dll

include makefile.common
