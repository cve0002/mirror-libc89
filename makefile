TARGET := x86_64

LIB := libcve000libc.a

AR := ar
ASM := nasm
CC := clang

AFLAGS := -felf64 -w+x -w+error -w+all -w-error=reloc-rel-dword

CSTD := -std=c89
INCLUDE :=
CFLAGS := $(CSTD) $(INCLUDE) -Werror -Wall -Wvla -pedantic-errors -nostdlib -nostdinc -nostartfiles

ASMSRC := ${wildcard arch/$(TARGET)/*.S}
ASMOBJ := $(ASMSRC:.S=.S.o)


.PHONY: test clean

test: $(LIB)
	$(CC) $(CFLAGS) test/main.c $(LIB) -o test/main
	./test/main

clean:
	rm -rf $(ASMOBJ)


$(LIB): $(ASMOBJ)
	$(AR) rs $(LIB) $(ASMOBJ)

%.S.o: %.S
	$(ASM) $(AFLAGS) $< -o $@

