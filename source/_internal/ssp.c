#include "_exit/_exit.h"
#include "io/stdio.h"

#define STACK_CHK_FAIL_MSG "stack checking failed\n"
#define STACK_CHK_FAIL_MSG_LEN 22

void __stack_chk_fail(void) {
    write(STDERR_FILENO, STACK_CHK_FAIL_MSG, STACK_CHK_FAIL_MSG_LEN);
	_exit(-1);
}
