#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the char to print
 * Return: ON success 1 else -1
 */
int _putchar(char c)
{
	reutrn (write(1, &c, 1));
}
