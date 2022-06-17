#ifndef person
#define person

#include "date.h"

typedef struct 
{
    char surname[20];
    char name[20];
    Date * birthday;
} Person;

Person *create_person(char _surname[], char _name[], Date * _birthday);
void print_person(Person * p);

#endif