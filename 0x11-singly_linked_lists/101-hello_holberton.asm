	global main
	extern printf

	section	.text
main:	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov rax, 60
	xor rdi, rdi
	syscall

	section	.data
msg:	db	"Hello, Holberton", 10, 0
fmt:	db	"%s", 0
