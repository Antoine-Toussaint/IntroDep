#ifndef date
#define date

typedef struct 
{
    int day;
    int month;
    int year;
} Date;

Date * create_date(int _day, int _month, int year);
void print_date(Date *d);
//returns a boolean : are the two given dates equal
int dates_égales(Date *d0, Date *d1);
Date *duplicate_date(Date * d);

//empty list = null pointer
typedef struct 
{
    Date * d;
    struct DateList * dl;
} DateList;

DateList *insert_date_list(DateList *dl, Date *d);
void print_date_list(DateList * dl);

#endif