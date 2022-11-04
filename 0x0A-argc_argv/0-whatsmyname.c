#include <stdio.h>


/**
 * main - function to print name
 * @argc: argc parameter
 * @argv: argv parameter
 * Return: 0 for success
 */
int main (int argc, char *argv[])
{
	(void)argc;
	
	printf("%s\n", *argv[0]);
	return (0);
}
