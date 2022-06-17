#include "python-array.h"
#include <stdlib.h>
#include <stdio.h>

int *empty()
{
    int *p = calloc(1, sizeof(int));
    return p;
}

int length(int *t)
{
    return *t;
}

void print_list(int *t)
{
    printf("[ ");
    int len = length(t);
    for (int i = 0; i < len - 1; i++)
    {
        printf("%d ,", *(t + 1 + i));
    }
    if (len != 0)
    {
        printf("%d", *(t + len));
    }
    printf(" ]\n");
}

int *append(int *t, int x)
{
    int newLen = *t + 1;
    int *p = calloc(newLen + 1, sizeof(int));
    for (int i = 1; i < newLen; i++)
    {
        *(p + i) = *(t + i);
    }

    *p = newLen;
    *(p + newLen) = x;

    return p;
}

int *insert(int *t, int x)
{
    int newLen = *t + 1;
    int *p = calloc(newLen + 1, sizeof(int));
    for (int i = 1; i < newLen; i++)
    {
        *(p + i + 1) = *(t + i);
    }

    *p = newLen;
    *(p + 1) = x;

    return p;
}

int get_el(int *t, int i)
{
    if (i >= *t)
    {
        return 0;
    }
    else
    {
        return *(t + i + 1);
    }
}

int *subarray(int *t, int i, int j)
{
    if (i >= j || j >= *t)
    {
        return empty();
    }
    int *p = calloc(j - i + 1, sizeof(int));
    *p = j - i;
    for (int u = 0; u < j - i; u++)
    {
        *(p + 1 + u) = *(t + 1 + i + u);
    }
    return p;
}