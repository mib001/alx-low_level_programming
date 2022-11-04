#include <stdio.h>

/**
 * main - print no of arguments
 * @argc: argc parameter
 * @argv: argv parameter
 * Return: 0 on success
 */
int main(int argc, char *argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
