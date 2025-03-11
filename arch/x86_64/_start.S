section .text
    global _start
    ; extern _init_environ_C
    extern main

_start:
    xor rbp, rbp

    ; mov rdi, rsp
    ; call _init_environ_C

    ; push argc to rdi and argv to rsi for main
    mov rdi, qword [rsp] ; <usize> argc (<int> in C)
    lea rsi, qword [rsp + 8] ; <usize> argv (<char **> in C)
    call main

    mov rdi, rax
    mov rax, 60
    syscall ; exit
