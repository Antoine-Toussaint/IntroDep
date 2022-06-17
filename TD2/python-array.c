#include "python-array.h"
#include <stdlib.h>
#include <stdio.h>

int *empty()
{
    int *p = calloc(9, sizeof(int));
    *p = (8 << 16) + 0;
    return p;
}

int length(int *t)
{
    return ((*t) << 16) >> 16;
}

int available_length(int *t)
{
    return ((*t) >> 16);
}

int *relocate(int *t)
{
    int new_available_len = 2 * available_length(t);
    int *p = calloc(new_available_len + 1, sizeof(int));
    int n = length(t);
    *p = (new_available_len << 16) + n;
    for (int i = 0; i < n; i++)
    {
        *(p+1+i) = *(t+1+i);
    }
    
    return p;
}

void print_list(int *t)
{
    printf("[");
    int len = length(t);
    for (int i = 0; i < len - 1; i++)
    {
        printf("%d ,", *(t + 1 + i));
    }
    if (len != 0)
    {
        printf("%d", *(t + len));
    }
    printf("]\n");
    printf("available length : %d, used length : %d\n\n", available_length(t), length(t));
}

int * append(int *t, int x)
{
    int newLen = length(t) + 1;
    if (newLen > available_length(t))
    {
        t = relocate(t);
    }
    *t = (available_length(t) << 16) + newLen;
    *(t + newLen) = x;

    return t;
}

int * insert(int *t, int x)
{
    int newLen = length(t) + 1;
    if (newLen > available_length(t))
    {
        t = relocate(t);
    }
    int len = length(t);
    for (int i = 0; i < len; i++)
    {
        *(t + len - i + 1) = *(t + len - i);
    }

    *t = (available_length(t) << 16) + (len + 1);
    *(t + 1) = x;

    return t;
}

int get_el(int *t, int i)
{
    if (i >= length(t))
    {
        return 0;
    }
    else
    {
        return *(t + i + 1);
    }
}

int superior_2_power(int n)
{
    int count = 0;
    while (n)
    {
        n = n >> 1;
    }
    return count;
}

int *subarray(int *t, int i, int j)
{
    if (i >= j || j >= length(t))
    {
        return empty();
    }
    int sub_available_length = superior_2_power(j - i + 1);
    int *p = calloc(sub_available_length, sizeof(int));
    *p = (sub_available_length << 16) + (j - i);
    for (int u = 0; u < j - i; u++)
    {
        *(p + 1 + u) = *(t + 1 + i + u);
    }
    return p;
}