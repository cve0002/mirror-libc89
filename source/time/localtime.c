#include <stddef.h>
#include <limits.h>
#include <time.h>
#include <unimplemented.h>

#define IS_LEAP_YEAR(year) (((year) % 4 == 0 && (year) % 100 != 0) || ((year) % 400 == 0))
#define SECS_IN_DAY 86400


struct tm *localtime_r(const time_t *_t, struct tm *tm) {
    unimplemented("localtime_r()");
    /* const time_t t = *_t;
    uint64_t total_days, rem_secs;
    static const char days_in_months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    Reject time_t values whose year would overflow int (thanks musl)
	if (t < INT_MIN * 31622400L || t > INT_MAX * 31622400L) {
        return NULL;
    }

    total_days = t / SECS_IN_DAY;
    rem_secs = t % SECS_IN_DAY;

    tm->tm_hour = rem_secs / 3600;
    rem_secs %= 3600;
    tm->tm_min = rem_secs / 60;
    tm->tm_sec = rem_secs % 60;
    
    tm->tm_wday = (total_days + 3) % 7;

    return tm; */
}

struct tm *localtime(const time_t *t) {
    static struct tm tm;
    return localtime_r(t, &tm);
}
