#include "main.h"

/**
 * malloc_checked - check malloc
 * @b: allocated memory
 * Return: ptr to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
