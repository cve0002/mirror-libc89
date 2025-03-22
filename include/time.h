#ifndef __TIME_H__
#define __TIME_H__

#include <stdint.h>


#ifndef time_t
    #define time_t time_t
    typedef long time_t;
#endif

struct tm {
    /* note: tm_sec is generally [0-59], (C89 [0-61] was a defect (cppreference))
        the extra range is to accommodate for leap seconds in certain systems */
    int tm_sec;     /* seconds after the minute [0-60] */
    int tm_min;     /* minutes after the hour   [0-59] */
    int tm_hour;    /* hours since midnight     [0-23] */
    int tm_mday;    /* day of the month         [1-31] */
    int tm_mon;     /* months since January     [0-11] */
    int tm_year;    /* years since 1900         [----] */
    int tm_wday;    /* days since Sunday        [0-6] */
    int tm_yday;    /* days since January 1     [0-365] */
    int tm_isdst;   /* Daylight Saving Time flag */

    /* long tm_gmtoff;
    const char *tm_zone; */
};


time_t time(time_t *tloc); 

struct tm *localtime_r(const time_t *, struct tm *);
struct tm *localtime(const time_t *);

#endif /* __TIME_H__ */

