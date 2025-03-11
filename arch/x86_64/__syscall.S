section .text
    global __syscall0, __syscall1, __syscall2, __syscall3, __syscall4, __syscall5;, __syscall6

__syscall0:
    mov rax, rdi
    syscall
    ret

__syscall1:
    mov rax, rdi
    mov rdi, rsi
    syscall
    ret

__syscall2:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    syscall
    ret

__syscall3:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    mov rdx, rcx
    syscall
    ret

__syscall4:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    mov rdx, rcx
    mov r10, r8
    syscall
    ret

__syscall5:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    mov rdx, rcx
    mov r10, r8
    mov r8, r9
    syscall
    ret

; __syscall6:
;     ret
