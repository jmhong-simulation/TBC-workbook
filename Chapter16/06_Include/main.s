	.file	"main.c"
	.text
	.def	_multiply;	.scl	3;	.type	32;	.endef
_multiply:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	imull	12(%ebp), %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC2:
	.ascii "%p %d\12\0"
LC3:
	.ascii "%d\0"
LC4:
	.ascii "%p\12\0"
	.data
	.align 32
LC0:
	.ascii "James Bone\0"
	.space 89
	.long	45
	.align 32
LC1:
	.ascii "Michael Jobs\0"
	.space 87
	.long	50
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB15:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	andl	$-16, %esp
	subl	$224, %esp
	.cfi_offset 7, -12
	.cfi_offset 6, -16
	.cfi_offset 3, -20
	call	___main
	movl	_status, %eax
	movl	%eax, 8(%esp)
	movl	$_status, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	call	_print_status
	movl	$2, 4(%esp)
	movl	$51, (%esp)
	call	_multiply
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	$_multiply, 4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	call	_print_address
	leal	120(%esp), %eax
	movl	$LC0, %ebx
	movl	$26, %edx
	movl	%eax, %edi
	movl	%ebx, %esi
	movl	%edx, %ecx
	rep movsl
	leal	16(%esp), %eax
	movl	$LC1, %ebx
	movl	$26, %edx
	movl	%eax, %edi
	movl	%ebx, %esi
	movl	%edx, %ecx
	rep movsl
	movl	$0, %eax
	leal	-12(%ebp), %esp
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE15:
	.ident	"GCC: (i686-posix-dwarf-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_print_status;	.scl	2;	.type	32;	.endef
	.def	_print_address;	.scl	2;	.type	32;	.endef
