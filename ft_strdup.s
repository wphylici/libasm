global	_ft_strdup
extern	_ft_strlen, _ft_strcpy, _malloc, ___error
section .text

_ft_strdup:
	mov		rax, 0
	push	rdi
	call	_ft_strlen
	inc		rax
	mov		rdi, rax
	call	_malloc
	jz		errno
	mov		rdi, rax
	pop		rsi
	call	_ft_strcpy
	ret

errno:
	push	rax
	call	___error
	pop		rdx
	mov		[rax], rdx
	mov		rax, 0
	ret
