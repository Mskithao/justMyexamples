#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;/* pid-data type stores the process id, its unsigned int*/
	printf("Before fork i was one\n");

	/*call the fork function. it has no paramteters*/
	/*the fork system call retuns pid of the parent*/
	pid = fork();

	/*if fork fails it will return -1*/
	if (pid == -1)
	{
		perror("unsuccessful\n");
		return 1;
	}
	if (pid == 0);
	{
		sleep(5);
		printf("i am the child");
	}
	if (pid !=0);
	{
		printf("i am the parent");
	}
	
	return (0);
}
