#include <stdio.h>
#include <stdint.h>

uint32_t six_middle_bits(uint32_t n) {
	// mask
	// going to use and to extract
	// 0s everywhere except middle 6
	//
	// 6 1s, 
	// 32 bits wide, each side 16 bits
	// 13 bits to the right
	uint32_t mask = 0b111111 << 13;
	return mask & n;
}

int main(void) {
	printf("six_middle_bits(%b) = %b\n", 1000000, six_middle_bits(1000000));

}
