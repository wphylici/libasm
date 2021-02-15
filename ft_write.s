extern		___error
global		_ft_write

section		.text

_ft_write:
	mov		rax, 0
	mov		rax, 0x2000004
	syscall
	jb		errno
	ret

errno:
	push	rax
	call	___error
	pop		rdx
	mov		[rax], rdx
	mov		rax, -1
	ret

