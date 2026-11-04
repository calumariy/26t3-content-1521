#include <stdio.h>

int main(int argc, char **argv) {
	if (argc != 2) {
		fprintf(stderr, "Incorrect arguments\n");
		return 1;
	}

	FILE *f = fopen(argv[1], "r");

	if (f == NULL) {
		// what is errno?
		perror(argv[1]);
		return 1;
	}

	int c;
	while ((c = fgetc(f)) != '\n') {
		printf("%c", c);
	}

	fputc('\n', stdout);

	fclose(f);
}
