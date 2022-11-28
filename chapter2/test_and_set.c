#include <stdbool.h>
bool test_and_set(volatile bool *p) {
    return __sync_lock_test_and_set(p, 1);
}

// test_and_set:
// .LFB0:
// 	.cfi_startproc
// 	endbr64
// 	movl	$1, %eax
// 	xchgb	(%rdi), %al
// 	testb	%al, %al 
// 	setne	%al // setne D	setnz	D <- ~ZF	Not equal / not zero
// 	ret
// 	.cfi_endproc
