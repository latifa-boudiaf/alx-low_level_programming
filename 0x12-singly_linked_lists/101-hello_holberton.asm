section .data
    hello_string db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello_string
    call printf
    pop rbp
    ret

