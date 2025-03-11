TARGET := x86_64

LIB := libcve000libc.a

AR := ar
ASM := nasm
CC := clang

AFLAGS := -felf64 -w+x -w+error -w+all -w-error=reloc-rel-dword

CSTD := -std=c89
INCLUDE := -I arch/$(TARGET)/include
CFLAGS := $(CSTD) $(INCLUDE) -Werror -Wall -Wvla -pedantic-errors -nostdlib -nostdinc -nostartfiles -ffreestanding -fno-common

ASMSRC := ${wildcard arch/$(TARGET)/*.S}
ASMOBJ := $(ASMSRC:.S=.S.o)


.PHONY: lib objdump test clean

lib: $(LIB)

objdump:
	@echo -e '\n\n============================================'
	objdump -M intel -d $(LIB)
	@echo -e '\n\n============================================\n\n'

test: $(LIB)
	$(CC) $(CFLAGS) test/main.c $(LIB) -o test/main
	./test/main

clean:
	rm -rf $(ASMOBJ) test/main


$(LIB): $(ASMOBJ)
	$(AR) rs $(LIB) $(ASMOBJ)

%.S.o: %.S
	$(ASM) $(AFLAGS) $< -o $@

