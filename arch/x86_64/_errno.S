section .text
    global _errno_after_syscall_prepare_for_c
    extern __set_errno

_errno_after_syscall_prepare_for_c:
    neg rax
    mov rdi, rax
    call __set_errno
    ret
