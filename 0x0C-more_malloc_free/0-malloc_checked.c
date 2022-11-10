#include "main.h"

/**
 * malloc_checked - check malloc
 * @b: allocated memory
 * Return: ptr to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);

}
