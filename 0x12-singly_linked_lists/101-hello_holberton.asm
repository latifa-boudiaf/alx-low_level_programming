section .data
    ; Define a null-terminated string to be printed with a newline
    hello_string db "Hello, Holberton", 0xA ; 0xA is the newline character

section .text
    ; Declare the main function
    global main
    ; Declare the printf function as an external function
    extern printf

main:
    ; Set up the stack frame
    push rbp
    ; Set the format string address in the rdi register
    mov rdi, hello_string
    ; Call the printf function
    call printf
    ; Clean up the stack frame
    pop rbp
    ; Return from the main function
    ret

