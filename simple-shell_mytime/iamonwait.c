#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid;

	/*child process is created*/
	pid = fork();

	/*if fork fails*/
	if (pid == -1)
	{
		perror("unsuccessful\n");
		return 1;
	}
	
	/*in the child process*/
	if (pid == 0)
	{
		printf("child process\n");
	}
	
	/*in parent process*/
	else
	{
		wait(NULL);/*put the wait system call in the parent*/
		printf("parent process\n");
	}
	
	return 0;
}
