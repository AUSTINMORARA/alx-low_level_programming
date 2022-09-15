	.file	"10-print_triangle.c"
	.text
	.globl	print_triangle
	.type	print_triangle, @function
print_triangle:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	cmpl	$0, -20(%rbp)
	jle	.L2
	movl	$1, -8(%rbp)
	jmp	.L3
.L10:
	movl	-20(%rbp), %eax
	subl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.L4
.L5:
	movl	$32, %edi
	call	putchar@PLT
	subl	$1, -4(%rbp)
.L4:
	cmpl	$0, -4(%rbp)
	jg	.L5
	movl	$0, -4(%rbp)
	jmp	.L6
.L7:
	movl	$35, %edi
	call	putchar@PLT
	addl	$1, -4(%rbp)
.L6:
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jl	.L7
	movl	-8(%rbp), %eax
	cmpl	-20(%rbp), %eax
	je	.L11
	movl	$10, %edi
	call	putchar@PLT
	jmp	.L9
.L11:
	nop
.L9:
	addl	$1, -8(%rbp)
.L3:
	movl	-8(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jle	.L10
.L2:
	movl	$10, %edi
	call	putchar@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	print_triangle, .-print_triangle
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
