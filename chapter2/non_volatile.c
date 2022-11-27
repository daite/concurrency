void wait_while_0(int *p) {
    while (*p == 0) {}
}

// aarch64-linux-gnu-gcc -O3 -S non_volatile.c
// 	.arch armv8-a
// 	.file	"non_volatile.c"
// 	.text
// 	.align	2
// 	.p2align 4,,11
// 	.global	wait_while_0
// 	.type	wait_while_0, %function
// wait_while_0:
// .LFB0:
// 	.cfi_startproc
// 	ldr	w0, [x0]
// 	cbnz	w0, .L1
// .L3:
// 	b	.L3
// 	.p2align 2,,3
// .L1:
// 	ret
// 	.cfi_endproc
// .LFE0:
// 	.size	wait_while_0, .-wait_while_0
// 	.section	.text.startup,"ax",@progbits
// 	.align	2
// 	.p2align 4,,11
// 	.global	main
// 	.type	main, %function
// main:
// .LFB1:
// 	.cfi_startproc
// 	mov	w0, 0
// 	ret
// 	.cfi_endproc
// .LFE1:
// 	.size	main, .-main
// 	.ident	"GCC: (Debian 12.2.0-9) 12.2.0"
// 	.section	.note.GNU-stack,"",@progbits