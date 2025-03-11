section .text
    global __syscall0

__syscall0:
    mov rax, rdx
    syscall
    ret
