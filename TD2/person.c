#include "person.h"
#include<stdlib.h>
#include<stdio.h>

Person *create_person(char * _surname, char * _name, Date * _birthday)
{
    Person * p = malloc(sizeof(Person));
    int i = 0;
    while(*(_surname+i))
    {
        *(p->surname + i) = *(_surname + i);
        i++;
    }

    i = 0;
    while(*(_name+i))
    {
        *(p->name + i) = *(_name + i);
        i++;
    }

    p->birthday = _birthday;

    return p;
}

void print_person(Person * p)
{
    printf("%s %s, born ", p->surname, p->name);
    print_date(p->birthday);
}
