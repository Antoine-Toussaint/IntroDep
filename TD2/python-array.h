int * empty();
int length(int * t);
void print_list(int * t);
//adds an element at the end
int * append(int * t, int x);
//adds an element at the beginning
int * insert(int * t, int x);
int get_el(int * t, int i);
//returns a slice of the list, from i index included to j index excluded
int * subarray(int * t, int i, int j);