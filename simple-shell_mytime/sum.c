/*a program that prints all the arguments, without using ac.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	printf(" argc = %d\n", argc);
	printf("argv content is argv[]\n");
	
	for (i = 1; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
		sum += atoi (argv[i]);
	}
	printf("sum is %d\n", sum);
	return (0);
}
