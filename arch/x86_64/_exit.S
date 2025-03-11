section .text
    global _exit

_exit:
    mov rax, 60
    syscall
    ret ; ?
