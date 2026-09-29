#include <stdio.h>

void recurs(int n) {
	
	if (n == 0) {return;}
	printf("Hi\n");
	recurs(n - 1);
}

int main(void) {
	recurs(10);
}
