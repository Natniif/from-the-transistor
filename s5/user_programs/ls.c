#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
	if (argc > 2){
		printf("Usage: ls file | ls");
	}

	DIR* dp;
	if (argc == 2) {
		dp = opendir(argv[2]);
	} else {
		dp = opendir(".");
	}

	if (dp == NULL) {
		perror("opendir");
		return 1;
	}

	struct dirent *entry;
	while((entry = readdir(dp)) != NULL) {
		printf("%s\n", entry->d_name);
	}

	closedir(dp);
	return 0;
}