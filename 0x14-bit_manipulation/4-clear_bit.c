#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to number
 * @index: to be setted
 * Return: 1 if it worked, or -1 if an error occurred.
 */
 
int clear_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int i = 1 << index;
    
    if(index > 63)
        return (-1);
        
        
    if(*n & i)
    
        *n ^= i;
        
    return (1);
    
}
