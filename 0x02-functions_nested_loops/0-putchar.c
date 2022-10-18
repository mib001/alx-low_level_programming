#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints it followed by new line
 *
 * Return: On Success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
