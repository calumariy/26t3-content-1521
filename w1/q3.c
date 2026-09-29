#include <stdio.h>

int x;

int *get_num_ptr(void);

int main(void) {
    int *num = get_num_ptr();
    printf("%d\n", *num);
}

int *get_num_ptr(void) {
    x = 42;
    return &x;
}
