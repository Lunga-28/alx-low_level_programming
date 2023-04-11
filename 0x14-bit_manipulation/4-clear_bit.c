#include "main.h"

/**
 * clear_bit - sets the bit to 0.
 * @n: pointer......
 * @index: index.....
 *
 *
 *
 * Return: 1 .... or -1......
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);

	mask <<= index; /*** Shift 1 to the left by index positions ***/
  
	if (*n & mask)
{
mask = ~mask;
    
*n &= mask; /*** Perform bitwise AND **/
    
return (1);
    
}
  
return (-1);
}
