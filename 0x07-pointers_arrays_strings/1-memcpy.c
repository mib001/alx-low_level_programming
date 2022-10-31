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
	unsigned int i = 0;

	for (; i < n, i++)
		dest[i] = src[i];
	return (dest);
}
