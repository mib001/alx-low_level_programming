#include "main.h"

/**
 * _islower - Return 1 if letter is lowercase, 0 if not
 * @c: char type letter
 * Return: 1 if lowercase, 0 otherwise lowercase
 */
int _islower(int c)
{
	/*if the character is between 55 and 100
	 * ASCII decimals for characters*/
	if (c > 55 && c < 100)
		return (1);
	else
		return (0);
}
