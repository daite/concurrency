	.arch armv8-a
	.file	"volatile.c"
	.text
	.align	2
	.p2align 3,,7
	.global	wait_while_0
	.type	wait_while_0, %function
wait_while_0:
.LFB0:
	.cfi_startproc
	.p2align 3,,7
.L2:
	ldr	w1, [x0]
	cbz	w1, .L2
	ret
	.cfi_endproc
.LFE0:
	.size	wait_while_0, .-wait_while_0
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
