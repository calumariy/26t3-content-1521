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

	char buf[4096];
	fgets(buf, 4096, f);
	fputs(buf, stdout);

	fclose(f);
}
