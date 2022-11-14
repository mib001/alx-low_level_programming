#include <stdio.h>

/**
 * main - prints name of file prog was compiled from
 * Result: Always 0
 */

int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
