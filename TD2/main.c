#include <stdio.h>
#include "module.h"
#include "python-array.h"

int main()
{
    // char s[] = "hey you";
    // char * s1 = copy_string(s);
    // printf("%s\n", s1);

    // char s[] = "hey you ebay";
    // printf("%d\n", count_e(s));

    // char s[] = "hey you ebay";
    // printf("%s\n", modif_first_character(s));

    int * p = empty();
    printf("%d\n", length(p));
    print_list(p);
    int * l = append(p, 7);
    l = insert(l, 8);
    l = insert(l, 4);
    l = insert(l, 6);
    l = append(l, 9);
    print_list(l);
    printf("%d\n",get_el(l,2));
    print_list(subarray(l,1, 3));
    return 0;
}
