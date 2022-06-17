#include "module.h"

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