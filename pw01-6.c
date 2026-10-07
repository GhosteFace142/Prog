#include <stdio.h>
#define Day_in_year 365;
#define Hours_in_day 24;
#define Sec_in_hour 3600;
int main()
{
    int years = 18;
    int days = years * Day_in_year;
    int hours = days * Hours_in_day;
    int sec = hours * Sec_in_hour;
    printf("Тики:%d|Часы:%d|Дни:%d|Годы:%d\n", sec, hours, days, years);
    return 0;
}
