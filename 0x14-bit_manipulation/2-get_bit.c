#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * get_bit - returns value of a bit.
 * @n: .....
 *
 * @index: ..................... 
 *
 *
 * Return: .................................
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	a = ((n >> index) & 1);
if (index > 64)
return (-1);
  
return (a);
}
