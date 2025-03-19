#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <environ.h>
#include <errno.h>
#include <memory.h>
#include <progname.h>
#include <time.h>
#include <malloc.h>


int _fputs(const char *s, fd_t fd) {
    return write(fd, s, strlen(s));
}

#define print_line_feed() write(STDOUT_FILENO, "\n", 1)


int main(void) {
    szdp_t *szdp;
    time_t _time;
    struct tm *tm;
    char buftest[11];
    const char *progname;
    const char *env_test_var;
    char cwd[100];

    env_test_var = getenv("XDG_CURRENT_DESKTOP");
    _fputs(env_test_var, STDOUT_FILENO);
    print_line_feed();
    
    memset(buftest, '~', 10);
    buftest[10] = '*';
    write(STDOUT_FILENO, buftest, 11);
    print_line_feed();

    progname = getprogname();
    _fputs(progname, STDOUT_FILENO);
    print_line_feed();

    
    if (-1 == mkdir("test.d", _S_DEFDIR)) {
        perror("mkdir");
        return -1;
    }
    _fputs("test.d created\n", STDOUT_FILENO);
    
    if (-1 == chdir("test")) {
        perror("chdir");
        return -1;
    }
    
    if (!getcwd(cwd, sizeof(cwd))) {
        perror("getcwd");
        return -1;
    }
    _fputs(cwd, STDOUT_FILENO);
    print_line_feed();
    
    if (-1 == rename("../test.d", "./test.d")) {
        perror("rename");
        return -1;
    }
    _fputs("renamed test.d -> test/test.d\n", STDOUT_FILENO);

    if (-1 == chdir("..")) {
        perror("chdir");
        return -1;
    }

    if (-1 == rmdir("test/test.d")) {
        perror("rmdir");
        return -1;
    }
    _fputs("removed test/test.d\n", STDOUT_FILENO);

    szdp = szdp_init();
    if (!szdp) {
        perror("szdp_init");
        return -1;
    }
    if (!szdp_malloc(szdp, sizeof(int))) {
        perror("szdp_malloc");
        return -1;
    }
    *szdp_ptr(szdp, int *) = 123456;
    if (!szdp_realloc(szdp, sizeof(int) * 2)) {
        perror("szdp_malloc");
        return -1;
    }
    _fputs(*szdp_ptr(szdp, int *) == 123456 ? "szdp ok\n" : "szdp err\n", STDOUT_FILENO);
    szdp_free(szdp);
    if (szdp_get_len(szdp) != 0) {
        perror("szdp_free");
        return -1;
    }

    _time = time(&_time);
    tm = localtime(&_time);
    ignore(tm);

    return 0;
}
