/*a program that prints all the arguments, without using ac.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;
	
	printf(" argv content is argv[]\n");
	
	while (*argv !=NULL)
	{
		printf("argv = %s\n",*argv);
		argv++;
	}
	
	return (0);
}
