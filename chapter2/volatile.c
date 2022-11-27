void wait_while_0(volatile int *p) {
    while (*p == 0) {}
}

// aarch64-linux-gnu-gcc -O3 -S volatile.c
// 	.arch armv8-a
// 	.file	"volatile.c"
// 	.text
// 	.align	2
// 	.p2align 4,,11
// 	.global	wait_while
// 	.type	wait_while, %function
// wait_while:
// .LFB0:
// 	.cfi_startproc
// 	.p2align 3,,7
// .L2:
// 	ldr	w1, [x0]
// 	cbz	w1, .L2
// 	ret
// 	.cfi_endproc
// .LFE0:
// 	.size	wait_while, .-wait_while
// 	.ident	"GCC: (Debian 12.2.0-9) 12.2.0"
// 	.section	.note.GNU-stack,"",@progbits
