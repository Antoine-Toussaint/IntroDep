#include <stdio.h>
#include "module.h"

int main()
{
    // char s[] = "hey you";
    // char * s1 = copy_string(s);
    // printf("%s\n", s1);

    // char s[] = "hey you ebay";
    // printf("%d\n", count_e(s));

    char s[] = "hey you ebay";
    printf("%s\n", modif_first_character(s));

    return 0;
}
