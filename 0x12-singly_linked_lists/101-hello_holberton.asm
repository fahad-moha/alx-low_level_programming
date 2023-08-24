section .data
    hello db "Hello, Holberton", 10, 0
    format db "%s", 0

section .text
    extern printf

global main
main:
    ; Prepare arguments for printf
    mov rdi, format
    mov rsi, hello
    xor eax, eax  ; Clear eax register for variadic function call

    ; Call printf
    call printf

    ; Exit the program
    xor eax, eax
    ret
