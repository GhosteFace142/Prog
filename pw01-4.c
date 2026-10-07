#include <stdio.h>

int main()
{
    int years, days_per_year, total_days;
    years = 51;
    days_per_year = 365;
    total_days = years * days_per_year;
    printf("YEARS = %d\n", years);
    printf("DAYS_PER_YEAR = %d\n", days_per_year);
    printf("TOTAL_DAYS = %d\n", total_days);
    return 0;
}
