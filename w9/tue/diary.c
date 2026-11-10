#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char *home = getenv("HOME");
	char buf[4096];

	snprintf(buf, sizeof(buf), "%s/.diary", home);

	FILE *f = fopen(buf, "r");
	char c;
	while ((c = fgetc(f)) != EOF) {
		fputc(c, stdout);
	}
}
