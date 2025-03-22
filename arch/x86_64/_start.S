section .text
    global _start
    extern __init_libc
    extern main


_start:
    xor rbp, rbp

    mov rdi, rsp ; rsp_ptr
    call __init_libc
    
    ; push argc to rdi and argv to rsi for main
    mov rdi, qword [rsp] ; <usize> argc (<int> in C)
    lea rsi, qword [rsp + 8] ; <usize> argv (<char **> in C)
    call main
    
    mov rdi, rax
    mov rax, 60
    syscall ; exit
