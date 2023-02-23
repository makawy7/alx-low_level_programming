#include <stdio.h>
#include "main.h"

int main(void)
{
    int month;
    int day;
    int year;

    month = 2;
    day = 29;
    year = 1991;
    printf("Date: %02d/%02d/%04d\n", month, day, year);
    day = convert_day(month, day);
    print_remaining_days(month, day, year);

    month = 2;
    day = 29;
    year = 2427;
    printf("Date: %02d/%02d/%04d\n", month, day, year);
    day = convert_day(month, day);
    print_remaining_days(month, day, year);

    month = 6;
    day = 30;
    year = 2022;
    printf("Date: %02d/%02d/%04d\n", month, day, year);
    day = convert_day(month, day);
    print_remaining_days(month, day, year);

    month = 9;
    day = 1;
    year = 2022;
    printf("Date: %02d/%02d/%04d\n", month, day, year);
    day = convert_day(month, day);
    print_remaining_days(month, day, year);

    month = 12;
    day = 31;
    year = 2022;
    printf("Date: %02d/%02d/%04d\n", month, day, year);
    day = convert_day(month, day);
    print_remaining_days(month, day, year);

    return 0;
}
