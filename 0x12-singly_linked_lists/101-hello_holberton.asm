;; The purpose of this program is to print Hello, Holberton;;

 segment .data
 hello db "Hello, Holberton", 0xa, 0
	
 segment .text
 global main
 extern printf


 main:
     mov rax, 0
     mov rdi, hello
     call printf
