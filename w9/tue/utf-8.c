#include <stdio.h>

int main(int argc, char **argv){
	FILE *f = fopen(argv[1], "r");

	char c;
	int codepoints = 0;
	while ((c = fgetc(f)) != EOF) {
	// if its 1 byte long
		if ((c & 0b1000'0000) == 0b0000'0000 ) {
		} else if ((c & 0b1110'0000) == 0b1100'0000) {
			// 2 bytes
			fgetc(f);
		} else if ((c & 0b1111'0000) == 0b1110'0000) {
			// 3 bytes
			fgetc(f);
			fgetc(f);
		} else if ((c & 0b1111'1000) == 0b1111'0000) {
			// 4 bytes
			fgetc(f);
			fgetc(f);
			fgetc(f);
		}
		codepoints++;
	}
	printf("codepoints = %d\n", codepoints);
}

