%define SET_ERRNO _set_errno_after_syscall

section .text
    global __syscall0, __syscall1, __syscall2, __syscall3, __syscall4, __syscall5;, __syscall6
    extern SET_ERRNO

__syscall0:
    mov rax, rdi
    syscall
    call SET_ERRNO
    ret

__syscall1:
    mov rax, rdi
    mov rdi, rsi
    syscall
    call SET_ERRNO
    ret

__syscall2:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    syscall
    call SET_ERRNO
    ret

__syscall3:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    mov rdx, rcx
    syscall
    call SET_ERRNO
    ret

__syscall4:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    mov rdx, rcx
    mov r10, r8
    syscall
    call SET_ERRNO
    ret

__syscall5:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    mov rdx, rcx
    mov r10, r8
    mov r8, r9
    syscall
    call SET_ERRNO
    ret

; __syscall6:
;     ret
