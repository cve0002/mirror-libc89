section .text
    global __syscall0, __syscall1, __syscall2, __syscall3, __syscall4, __syscall5, __syscall6
    extern __syscall_ret_handle

call_sys_ret:
    mov rdi, rax
    call __syscall_ret_handle
    ret

__syscall0:
    mov rax, rdi
    syscall
    call call_sys_ret
    ret

__syscall1:
    mov rax, rdi
    mov rdi, rsi
    syscall
    call call_sys_ret
    ret

__syscall2:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    syscall
    call call_sys_ret
    ret

__syscall3:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    mov rdx, rcx
    syscall
    call call_sys_ret
    ret

__syscall4:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    mov rdx, rcx
    mov r10, r8
    syscall
    call call_sys_ret
    ret

__syscall5:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    mov rdx, rcx
    mov r10, r8
    mov r8, r9
    syscall
    call call_sys_ret
    ret

__syscall6:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    mov rdx, rcx
    mov r10, r8
    mov r8, r9
    mov r9, qword [rsp - 8]
    syscall
    call call_sys_ret
    ret
