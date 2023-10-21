#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
	if (argc < 2) {
		printf("Usage: rm [file1, ...]");
		return 1;
	}

	for (int i = 1; i < argc; i++) {
		if (unlink(argv[i]) == 0) {
			printf("File %s removed \n", argv[i]);
		} else {
			perror("unlink");
			return -1;
		}
	}
	return 0;
}