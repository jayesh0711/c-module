	.file	"file2.c"
	.text
	.section	.rodata
.LC1:
	.string	"enter the number of element "
.LC2:
	.string	"%d "
.LC3:
	.string	"%d"
.LC4:
	.string	"the sum of the array is %f"
.LC5:
	.string	"the avg of array is %f"
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
	addq	$-128, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	movss	%xmm0, -120(%rbp)
	pxor	%xmm0, %xmm0
	movss	%xmm0, -116(%rbp)
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-128(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	$1, -124(%rbp)
	jmp	.L2
.L3:
	leaq	-112(%rbp), %rax
	movl	-124(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	addl	$1, -124(%rbp)
.L2:
	movl	-128(%rbp), %eax
	cmpl	%eax, -124(%rbp)
	jle	.L3
	movl	$1, -124(%rbp)
	jmp	.L4
.L5:
	movl	-124(%rbp), %eax
	cltq
	movl	-112(%rbp,%rax,4), %eax
	cvtsi2ssl	%eax, %xmm0
	movss	-116(%rbp), %xmm1
	addss	%xmm1, %xmm0
	movss	%xmm0, -116(%rbp)
	movl	-128(%rbp), %eax
	cvtsi2ssl	%eax, %xmm1
	movss	-116(%rbp), %xmm0
	divss	%xmm1, %xmm0
	movss	%xmm0, -120(%rbp)
	addl	$1, -124(%rbp)
.L4:
	movl	-128(%rbp), %eax
	cmpl	%eax, -124(%rbp)
	jle	.L5
	cvtss2sd	-116(%rbp), %xmm0
	leaq	.LC4(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	cvtss2sd	-120(%rbp), %xmm0
	leaq	.LC5(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L7
	call	__stack_chk_fail@PLT
.L7:
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
