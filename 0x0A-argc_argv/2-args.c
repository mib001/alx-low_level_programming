#include <stdio.h>

/**
 * main - print all arguments
 * @argv: argv parameter
 * @argc: argc parameter
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", i, argv[i]);
	}
	return(0);
}
