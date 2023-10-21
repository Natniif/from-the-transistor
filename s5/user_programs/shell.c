#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
	char input[100];
	while (1) {
		printf("shell> ");
		fgets(input, sizeof(input), stdin);
		input[strcspn(input, "\n")] ='\0';

		if (strcmp(input, "exit") == 0) {
			break;
		}

		if (fork() == 0) {
			char* args[] = {input, NULL};
			execv(input, args);

			perror("execvp");
			return 1;
		} else {
			// parent process
			int status; 
			// waits for child process to complete
			wait(&status);
		}
		
	}
	return 0;
}
