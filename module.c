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
    return 0;
}