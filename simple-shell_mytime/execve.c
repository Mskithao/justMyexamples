/**
 * execve is a system call used to exceute commands
 * synopsis: #iclude <unistd,h>
 * syntac: int execve(const char *filename, char *const argv[],char *const envp[]);
 * execv executes the program pointed by the file name
 * filename must be either a binary executable or a script starting with a line of the form
 * #! interpreter [optional-arg]
 */
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", NULL};

	int val = execve(argv[0], argv, NULL);

	if (val == -1)
		perror("error");
	printf("done with execve");

	return(0);
       	/*on sucess execeve does not return*/
	/*on error execv returns -1*/
}
