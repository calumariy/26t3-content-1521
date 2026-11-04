#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	FILE *f = fopen(argv[1], "r");

	if (f == NULL) {
		perror(argv[1]);
		return 1;
	}

	char buf[9];

	while (fgets(buf, 9, f) != NULL) {
		long num = strtol(buf, NULL, 16) & 0xFF;
		printf("%d\n", num);
		fgetc(f);
	}

}
