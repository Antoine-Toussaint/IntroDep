#include "date.h"
#include<stdio.h>
#include<stdlib.h>

Date *create_date(int _day, int _month, int _year)
{
    Date  * d = malloc(sizeof(Date));
    d->day = _day;
    d->month = _month;
    d->year = _year;
    return d;
}

void print_date(Date *d)
{
    printf("%d/%d/%d\n", d->day,d->month,d->year);
}

int dates_égales(Date *d0, Date *d1)
{
    if((d0->day != d1->day) || (d0->month != d1->month) || (d0->year != d1->year))
    {
        return 0;
    }

    return 1;
}

Date *duplicate_date(Date * d)
{
    Date *d1 = malloc(sizeof(Date));
    d1->day = d->day;
    d1->month = d->month;
    d1->year = d->year;

    return d1;
}

DateList *insert_date_list(DateList *dl, Date *d)
{
    DateList * new_dl = malloc(sizeof(DateList));
    new_dl->d = d;
    new_dl->dl = dl;
    return new_dl;
}

void print_date_list(DateList * dl)
{
    if (dl != NULL)
    {
        print_date(dl->d);
        print_date_list(dl->dl);
    }
}