#include <stdio.h>
#include <errno.h>

int main(int argc, char **argv) {
	if (argc != 2) {
		fprintf(stderr, "Error running, wrong number of args\n");
		return 1;
     	}

	FILE *f = fopen(argv[1], "r");

	// error
	if (f == NULL) {
		perror(argv[1]);
		return 1;
	}

	char buf[4096];
	if (fgets(buf, 4096, f) == NULL) {
		perror(argv[1]);
		return 1;
	}

	fputs(buf, stdout);
	
	fclose(f);

}
