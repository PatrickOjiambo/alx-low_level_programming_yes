global main
extern printf

section .data
    msg db 'Hello, Holberton', 0xA, 0

section .text
main:
    push rbp
    mov rbp, rsp

    ; Push the address of the format string on the stack
    lea rdi, [msg]
    mov rsi, 0
    mov rax, 0
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret

