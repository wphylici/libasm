global	_ft_strcmp
section .text

_ft_strcmp:
	mov rax, 0
	mov rdx, 0
	mov rcx, 0

loop:
	mov al, byte[rdi + rcx]
	mov dl, byte[rsi + rcx]
	cmp al, dl
	jne return
	cmp al, 0
	je	return
	inc	rcx
	jmp loop

return:
	sub	rax, rdx
	ret
