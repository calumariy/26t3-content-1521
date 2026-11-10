#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
	char buf[4096];
	getcwd(buf, sizeof(buf));

	DIR* d = opendir(buf);
	struct dirent * dent;

	while ((dent = readdir(d)) != NULL) {
		if (strcmp(dent->d_name, ".") == 0 ||
			strcmp(dent->d_name, "..") == 0) {
			continue;
		}
		puts(dent->d_name);
	}
}
