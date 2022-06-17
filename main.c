#include<stdio.h>
#include "module.h"

int main()
{
    for (int i = 0; i < 100; i++)
    {
        printf("%d\n",fibonacci(i));
    }
    

    return 0;
}