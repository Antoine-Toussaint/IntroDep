int * empty();
int length(int * t);
int available_length(int *t);
void print_list(int * t);

//adds an element at the end
//returns the same pointer, except if the size of the list had to be changed
int * append(int * t, int x);

//adds an element at the beginning
//return : same as append
int * insert(int * t, int x);
int get_el(int * t, int i);
//returns the minimum k so that 2^k > n
int superior_2_power(int n);
//returns a slice of the list, from i index included to j index excluded
int * subarray(int * t, int i, int j);