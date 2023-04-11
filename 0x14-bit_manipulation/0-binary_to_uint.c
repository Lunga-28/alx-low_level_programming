#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that does conversion
 * @b: ...
 *
 * Return: number or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int c_num = 0;
unsigned int x = 0;

if (!b || !*b)
return (0);
	
while (b[x])
{
	if (b[x] > 49)
	return (0);
	
	else
	if (b[x] == 49)
	{
		
	c_num <<= 1;
	c_num = c_num + 1;
		
	}
	
	else
	c_num <<= 1;
	x++;
	}
return (c_num);
}
