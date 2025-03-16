TARGET := x86_64

LIB := liblibc.a

AR := ar
ASM := nasm
CC := clang

AFLAGS := -felf64 -w+x -w+error -w+all -w-error=reloc-rel-dword -iarch/

CSTD := -std=c89
INCLUDE := -Iarch/$(TARGET) ${patsubst %, -I%, ${wildcard include/*/}} -Iinclude/ -Isource/_internal/
CWARN := -Werror -Wall -Wvla -pedantic-errors
CNOFLAGS := -nostdlib -nostdinc -fno-builtin -fno-common -fnoexecstack -fno-stack-protector
CFLAGS := $(CSTD) $(INCLUDE) $(CWARN)  -ffreestanding -fdata-sections

ASMSRC := ${wildcard arch/$(TARGET)/**.S}
ASMOBJ := $(ASMSRC:.S=.S.o)

CSRC := ${wildcard arch/$(TARGET)/**/**.c source/**/**.c}
COBJ := $(CSRC:.c=.c.o)


.PHONY: lib objdump test clean

lib: $(LIB)

objdump:
	@echo -e '\n\n============================================'
	objdump -M intel -d $(LIB)
	@echo -e '\n\n============================================\n\n'

test: $(LIB)
	$(CC) $(CFLAGS) -nostartfiles test/main.c $(LIB) -o test/main
	@echo '====================================================='
	@./test/main

clean:
	rm -rf $(ASMOBJ) $(COBJ) $(LIB) test/main


$(LIB): $(ASMOBJ) $(COBJ)
	$(AR) rs $(LIB) $(ASMOBJ) $(COBJ)

%.S.o: %.S
	$(ASM) $(AFLAGS) $< -o $@

%.c.o: %.c
	$(CC) $(CFLAGS) $< -c -o $@
