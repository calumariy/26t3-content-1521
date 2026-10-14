#include <stdio.h>

typedef unsigned int Word;

Word reverseBits(Word w) {
	Word out = 0;
	for (int i = 0; i < 32; i++) {
		Word mask = 0b1 << i;
		Word bit = (w & mask) >> i;
		out |= bit << (31 - i);
	}
	return out;
}

int main(void) {
	printf("%#x\n", reverseBits(0x01234567));
}
