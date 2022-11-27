#include <stdint.h>
#include <stdbool.h>
bool compare_and_swap(uint64_t *p, uint64_t val, uint64_t newval) {
    if (*p != val) {
        return false;
    }
    *p = newval;
    return true;
}

// compare_and_swap:
// .LFB0:
// 	.cfi_startproc
// 	endbr64
// 	xorl	%eax, %eax
// 	cmpq	%rsi, (%rdi)
// 	jne	.L1
// 	movq	%rdx, (%rdi)
// 	movl	$1, %eax
// .L1:
// 	ret