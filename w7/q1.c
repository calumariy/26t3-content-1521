#include <stdio.h>

union f {
	float a;
	int  b;
};

int main(void) {
	union f stuff;
	stuff.b = 0b00111111011111111111111111111111;
	printf("float = %.30f\n", stuff.a);

}
