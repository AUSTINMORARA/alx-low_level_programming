	.file	"100-times_table.c"
	.text
	.section	.rodata
.LC0:
	.string	"%lu"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movabsq	$612852475143, %rax
	movq	%rax, -16(%rbp)
	movq	$2, -8(%rbp)
	jmp	.L2
.L4:
	movq	-16(%rbp), %rax
	cqto
	idivq	-8(%rbp)
	movq	%rax, -16(%rbp)
.L3:
	movq	-16(%rbp), %rax
	cqto
	idivq	-8(%rbp)
	movq	%rdx, %rax
	testq	%rax, %rax
	je	.L4
	addq	$1, -8(%rbp)
.L2:
	movq	-16(%rbp), %rax
	cmpq	-8(%rbp), %rax
	jg	.L3
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$10, %edi
	call	putchar@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
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
