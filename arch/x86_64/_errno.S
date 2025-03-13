section .text
    global _set_errno_after_syscall
    extern __errno_location

_set_errno_after_syscall:
    cmp rax, 0
    jl .err
    ret
    .err:
    push rbx
    neg rax
    mov rbx, rax ; save syscall result
    call __errno_location ; get int *errno to rax
    mov dword [rax], ebx ; set errno
    pop rbx
    ret
