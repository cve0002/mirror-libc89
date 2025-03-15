#ifndef __SIGNAL_H__
#define __SIGNAL_H__

#include <sys/types.h>

int kill(pid_t pid, signo_t sig);

#include <_signo.h>

#endif /* __SIGNAL_H__ */
