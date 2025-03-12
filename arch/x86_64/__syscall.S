section .text
    global __syscall0, __syscall1, __syscall2, __syscall3, __syscall4, __syscall5;, __syscall6
    extern _errno_after_syscall_prepare_for_c

__syscall0:
    mov rax, rdi
    syscall
    call _errno_after_syscall_prepare_for_c
    ret

__syscall1:
    mov rax, rdi
    mov rdi, rsi
    syscall
    call _errno_after_syscall_prepare_for_c
    ret

__syscall2:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    syscall
    call _errno_after_syscall_prepare_for_c
    ret

__syscall3:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    mov rdx, rcx
    syscall
    call _errno_after_syscall_prepare_for_c
    ret

__syscall4:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    mov rdx, rcx
    mov r10, r8
    syscall
    call _errno_after_syscall_prepare_for_c
    ret

__syscall5:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    mov rdx, rcx
    mov r10, r8
    mov r8, r9
    syscall
    call _errno_after_syscall_prepare_for_c
    ret

; __syscall6:
;     ret
