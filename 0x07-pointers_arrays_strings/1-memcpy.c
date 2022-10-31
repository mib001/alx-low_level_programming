#include "main.h"

/**
 * _memcpy - memory copy
 * @dest: destination
 * @src: source
 * @n: number of bytes to be copied
 * Return: string copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0, a < n, a++)
		dest[a] = src[a];
	return (dest);
}
