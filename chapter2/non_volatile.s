	.arch armv8-a
	.file	"non_volatile.c"
	.text
	.align	2
	.p2align 3,,7
	.global	wait_while_0
	.type	wait_while_0, %function
wait_while_0:
.LFB0:
	.cfi_startproc
	ldr	w0, [x0]
	cbnz	w0, .L1
.L3:
	b	.L3
	.p2align 2,,3
.L1:
	ret
	.cfi_endproc
.LFE0:
	.size	wait_while_0, .-wait_while_0
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
