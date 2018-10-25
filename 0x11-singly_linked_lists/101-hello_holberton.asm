	global main
	extern printf

	section	.text
main:	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov ebx, 0
	mov eax, 1
	int 0x80

	section	.data
msg:	db	"Hello, Holberton", 10
fmt:	db	"%s", 0
