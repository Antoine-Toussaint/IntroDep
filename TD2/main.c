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

    int *t = empty();
    printf("t initialized : ");
    print_list(t);

    t = append(t, 5);
    t = append(t, 78);
    t = append(t, 15);
    print_list(t);

    t = insert(t, 8);
    t = insert(t, 9);
    t = insert(t, 10);
    print_list(t);

    t = append(t, 4);
    t = append(t, 5);
    t = append(t, 6);
    t = append(t, 7);
    t = append(t, 8);
    t = append(t, 9);
    t = append(t, 10);
    t = append(t, 11);
    print_list(t);

    t = insert(t, 7);
    t = insert(t, 8);
    t = insert(t, 9);
    t = insert(t, 10);
    t = insert(t, 11);
    print_list(t);

    return 0;
}
