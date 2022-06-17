#include "module.h"
#include <stdio.h>

int addone(int n){
    return n+1;
}

int fibonacci(int n)
{
    if(n<3){
        return 1;
    }

    int x0 = 1;
    int x1 = 1;
    for (int i = 0; i < n-2; i++)
    {
        int temp = x1;
        x1 = x0 + x1;
        x0 = temp;
    }

    return x1;
    
}

int * pairs()
{
    static int t[50];
    for (int i = 0; i < 50; i++)
    {
        t[i] = 2*i;
    }
    
    return t;
}

void print_tableau(int t[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",t[i]);
    }
}

void sum_array(int t0[], int t1[], int result[], int n)
{
    for (int i = 0; i < n; i++)
    {
        result[i] = t0[i] + t1[i];
    }
    
}

void print_input()
{
    char c[100];
    scanf("%s",c);
    printf("%s\n",c);
}

int mylen(const char s[])
{
    int size = 0;

    while (*s) {
        size += 1;
        s +=1;
    }

    return size;
}

int compare_string(const char s0[], const char s1[])
{
    if(!(*s0) && !(*s1))
    {
        return 0;
    }
    else if(!(*s0) || ((*s0) < (*s1)))
    {
        return 1;
    }
    else if(!(*s1) || ((*s0) > (*s1)))
    {
        return -1;
    }
    else
    {
        return compare_string(s0+1, s1+1);
    }
}

int is_palyndrome(const char s[])
{
    int len = mylen(s);
    if(len%2 == 0)
    {
        for (int i = 0; i < len/2; i++)
        {
            printf("%c et %c\n", s[i], s[len -1 -i]);
            if(s[i] != s[len-1-i])
            {
                return 0;
            }
        }

        return 1;
    }
    else
    {
        for (int i = 0; i < (len-1)/2; i++)
        {
            printf("%c et %c\n", s[i], s[len -1 -i]);
            if(s[i] != s[len-1-i])
            {
                return 0;
            }
        }

        return 1;
    }
}

int one_bits(int n)
{
    int count = 0;

    for (int i = 0; i < 32; i++)
    {
        count += n%2;
        n = n >> 1;
    }

    return count;
}