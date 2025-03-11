section .text
    global __syscall0
    global __syscall1

__syscall0:
    mov rax, rdi
    syscall
    ret

__syscall1:
    mov rax, rdi
    mov rdi, rsi
    syscall
    ret
