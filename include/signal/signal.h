#ifndef __SIGNAL_H__
#define __SIGNAL_H__

#include "sys/types.h"

extern int kill(pid_t pid, signo_t sig);

#endif /* __SIGNAL_H__ */
