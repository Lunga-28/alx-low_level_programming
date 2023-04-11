#include "main.h"

/**
 * get_endianness - function........
 *
 * Return: .........
 */
int get_endianness(void)
{
int num = 1;
char *c = (char *)&num;

if (*c)
		return (1);
  
else
	return (0);
}
