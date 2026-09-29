#include <stdio.h>

void foo() {
    return;
}
int main(void) {

    char str[10];
    foo();
    str[0] = 'H';
    str[1] = 'i';
    str[2] = '\0';

    printf("%s", str);
    return 0;
}

