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
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
