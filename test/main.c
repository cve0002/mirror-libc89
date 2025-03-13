#include "io/stdio.h"
#include "string/string.h"
#include "environ/environ.h"
#include "errno/errno.h"
#include "stddef.h"


int main(void) {
    const char *env_test_var;

    errno = ENOMEM;
    env_test_var = getenv("XDG_CURRENT_DESKTOP");
    write(STDOUT_FILENO, env_test_var, strlen(env_test_var));
    write(STDOUT_FILENO, "\n", 1);
    
    perror("");
    
    return 0;
}
