#include <stdlib.h>

int mylen(const char s[])
{
    int size = 0;

    while (*s) {
        size++;
        s++;
    }

    return size;
}

char * copy_string(const char s[])
{
    int len = mylen(s);
    char * p = calloc(len, sizeof(char));

    for (int i = 0; i < len; i++)
    {
        *(p+i) = s[i];
    }

    return p;
}

int count_e(char * s)
{
    int count = 0;
    while(*s)
    {
        if(*s == 'e')
        {
            count++;
        }

        s++;
    }

    return count;
}

char * modif_first_character(const char s[])
{
    char * p = copy_string(s);
    *p = 'A';
    return p;
}