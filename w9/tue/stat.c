#include <sys/stat.h>
#include <stdio.h>

int main(int argc, char **argv) {
	struct stat s;
	lstat(argv[1], &s);

	// check if publically readable
	printf("inode: %d\n", (s.st_ino));
	if (s.st_mode & S_IROTH) {
		chmod(argv[1], s.st_mode ^ S_IROTH);
	}
}
