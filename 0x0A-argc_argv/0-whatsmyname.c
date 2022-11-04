#include <stdio.h>

/**
 * main - function to print name
 * @argc: argc parameter
 * @argv: argv parameter
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
