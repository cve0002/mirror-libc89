#include "_exit/_exit.h"
#include "unistd.h"
#include "stdio.h"

#define STACK_CHK_FAIL_MSG "__stack_ch_fail: stack fault\n"
#define STACK_CHK_FAIL_MSG_LEN 29

void __stack_chk_fail(void) {
    write(STDERR_FILENO, STACK_CHK_FAIL_MSG, STACK_CHK_FAIL_MSG_LEN);
	_exit(-1);
}
