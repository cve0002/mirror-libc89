#ifndef __SIGNALNO_H__
#define __SIGNALNO_H__

#define SIGHUP      1   /* hangup */
#define SIGINT      2   /* interrupt */
#define SIGQUIT     3   /* quit */
#define SIGILL      4   /* illegal instruction */
#define SIGTRAP     5   /* trace trap */
#define SIGABRT     6   /* abort() */
#define SIGBUS      7   /* bus error */
#define SIGFPE      8   /* floating-point exception */
#define SIGKILL     9   /* kill */
#define SIGUSR1     10  /* user-signal 1 */
#define SIGSEGV     11  /* segmentation violation (segmantation fault) */
#define SIGUSR2     12  /* user-signal 2 */
#define SIGPIPE     13  /* pipe error */
#define SIGALRM     14  /* alarm */
#define SIGTERM     15  /* terminate */
#define SIGSTKFLT   16  /* stack fault */
#define SIGCHLD     17  /* child */
#define SIGCONT     18  /* continue */
#define SIGSTOP     19  /* stop */
#define SIGTSTP     20  /* tty stop */
#define SIGTTIN     21  /* tty input */
#define SIGTTOU     22  /* tty output */
#define SIGURG      23  /* urgent data */
#define SIGXCPU     24  /* exceeded cpu time */
#define SIGXFSZ     25  /* exceeded file size */
#define SIGVTALRM   26  /* virtual alarm */
#define SIGPROF     27  /* profiler alarm */
#define SIGWINCH    28  /* window changed */
#define SIGPOLL     29  /* async proc i/o polling */
#define SIGPWR      30  /* power failure */
#define SIGSYS      31  /* bad syscall argument */

#endif /* __SIGNALNO_H__ */
