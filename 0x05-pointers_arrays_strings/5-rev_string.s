	.file	"5-rev_string.c"
	.text
	.globl	rev_string
	.type	rev_string, @function
rev_string:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_strlen@PLT
	movl	%eax, -8(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L2
.L3:
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movl	-12(%rbp), %eax
	cltq
	subq	%rax, %rdx
	movq	%rdx, %rax
	leaq	-1(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rcx
	movq	-24(%rbp), %rdx
	addq	%rcx, %rdx
	movzbl	(%rax), %eax
	movb	%al, (%rdx)
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movl	-12(%rbp), %eax
	cltq
	subq	%rax, %rdx
	movq	%rdx, %rax
	leaq	-1(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	-4(%rbp), %edx
	movb	%dl, (%rax)
	addl	$1, -12(%rbp)
.L2:
	movl	-8(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	cmpl	%eax, -12(%rbp)
	jl	.L3
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	rev_string, .-rev_string
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
