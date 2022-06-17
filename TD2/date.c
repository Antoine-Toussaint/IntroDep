#include "date.h"
#include<stdio.h>

Date *create_date(int _day, int _month, int _year)
{
    static Date *d;
    d->day = _day;
    d->month = _month;
    d->year = _year;
    return d;
}

void print_date(Date *d)
{
    printf("%d/%d/%d", d->day,d->month,d->year);
}