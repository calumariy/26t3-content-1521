#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stat.h>

void recursively_print(char *path) {
	DIR* d = opendir(path);
	struct dirent * dent;

	while ((dent = readdir(d)) != NULL) {
		if (strcmp(dent->d_name, ".") == 0 ||
			strcmp(dent->d_name, "..") == 0) {
			continue;
		}
		// need to concat path
		struct stat s;
		stat(dent->d_name, &s);
		if (S_ISDIR(s.st_mode)) {
			recursively_print(dent->d_name);
		}

		puts(dent->d_name);
	}
}

int main() {
	char buf[4096];
	getcwd(buf, sizeof(buf));
	recursively_print(buf);

}
