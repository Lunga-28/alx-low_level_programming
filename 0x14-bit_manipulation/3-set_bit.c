#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * set_bit - set the value of a bit to 1.
 * @n: ..............
 * @index: ......
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

if (index > 64)
return (-1);

	mask <<= index; /*** Shift 1 to the left by index positions ***/
if (!(*n & mask))
{
	*n |= mask; /*** Set the bit at the given index to 1 ***/
	return (1);
}
return (-1);
}
