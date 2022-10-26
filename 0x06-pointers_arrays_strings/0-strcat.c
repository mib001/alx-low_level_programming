#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	i = 0;
	while (dest[a] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		i++;
		j++;
	}
	dest[a] = '\0';
	return (dest);
}
