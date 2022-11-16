#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - exec a func given a parameter on each arr
 * @array: array to reiterate
 * @size: size of array
 * @action: pointer to function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
