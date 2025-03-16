%define _SYSCALL_NR_REG_X86_64  rax
%define _SYSCALL_NR_REG_X86     eax
; %define _SYSCALL_NR_REG_ARM64   x8
; %define _SYSCALL_NR_REG_ARM     r7

%define _SYSCALL_RET_REG_X86_64  rax
%define _SYSCALL_RET_REG_X86     eax
; %define _SYSCALL_RET_REG_ARM64   x0
; %define _SYSCALL_RET_REG_ARM     r0

%define _SYSCALL_ARG0_REG_X86_64  rdi
%define _SYSCALL_ARG0_REG_X86     ebx
; %define _SYSCALL_ARG0_REG_ARM64   x0
; %define _SYSCALL_ARG0_REG_ARM     r0

%define _SYSCALL_ARG1_REG_X86_64  rsi
%define _SYSCALL_ARG1_REG_X86     ecx
; %define _SYSCALL_ARG1_REG_ARM64   x1
; %define _SYSCALL_ARG1_REG_ARM     r1

%define _SYSCALL_ARG2_REG_X86_64  rdx
%define _SYSCALL_ARG2_REG_X86     edx
; %define _SYSCALL_ARG2_REG_ARM64   x2
; %define _SYSCALL_ARG2_REG_ARM     r2

%define _SYSCALL_ARG3_REG_X86_64  r10
%define _SYSCALL_ARG3_REG_X86     esi
; %define _SYSCALL_ARG3_REG_ARM64   x3
; %define _SYSCALL_ARG3_REG_ARM     r3

%define _SYSCALL_ARG4_REG_X86_64  r8
%define _SYSCALL_ARG4_REG_X86     edi
; %define _SYSCALL_ARG4_REG_ARM64   x4
; %define _SYSCALL_ARG4_REG_ARM     r4

%define _SYSCALL_ARG5_REG_X86_64  r9
%define _SYSCALL_ARG5_REG_X86     ebp
; %define _SYSCALL_ARG5_REG_ARM64   x5
; %define _SYSCALL_ARG5_REG_ARM     r5

