#include <stdio.h>
#include <stdint.h>

uint32_t six_middle_bits(uint32_t n) {
	uint32_t mask = 0b111111 << 13;
	return mask ^ n;
}

int main(void) {
	printf("%b\n", six_middle_bits(0b010101101010101001010));
}
