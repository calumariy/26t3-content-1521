#include <stdio.h>

int main() {
	int bin = 0b10011101 >> 1;
	// 0b01001110
	printf("right shifted: %b\n", bin);

	bin = 0b10011101 << 1;
	// 0b100111010
	printf("left shifted: %b\n", bin);

	bin = 0b1001 & 0b1101;
	// 1001
	// 1101 | 
	// 1101
	//
	// 1001
	// 1101 & 
	// 1001
	//
	// 1001
	// 1101 ^ 
	// 0100

}
