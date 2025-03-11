const char *__progname = 0;

void __setprogname(const char *name) {
    __progname = name;
}

const char *__getprogname(void) {
    return __progname;
}
