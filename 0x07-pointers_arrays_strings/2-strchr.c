#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: string
 * @c: another char
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		return (s + index);
	}
	return ('\0');
}
