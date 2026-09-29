#include <stdio.h>


int main(void) {

	
	int counter = 0;
	int c = getchar();

	while (c != EOF) {
		counter++;
		c = getchar();
	}

	printf("%d\n", counter);
}
