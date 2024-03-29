#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to number
 * @index: to be setted
 * Return: 1 if it worked, or -1 if an error occurred.
 */
 
int set_bit(unsigned long int *n, unsigned int index)
{
    if(index > 64)
        return (-1);
        
    if(!((*n >> index) & 1))
    {
        *n += 1 << index;
        
        return (1);
        
    }
    return (-1);
}
