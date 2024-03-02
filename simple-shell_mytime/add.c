#include <stdio.h>
#include <unistd.h>

int main (void)
{
	int a = 3;
	int b = 5;
	int sum = a + b;
	pid_t ppid; //pid_t is a signed int data type. it reps pid

	ppid = getppid(); //getpid() is a function that returns the pid

	printf("sum is %d\n", sum);
	printf("ppid is %u\n", ppid);

	return (0);
}
