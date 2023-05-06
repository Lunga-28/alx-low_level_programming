#include <stdio.h>


/**
 * flip_bits - returns the number of bits you would need to flip
 *             to get from one number to another.
 * @n: number to be flipped
 * @m: number to filp n to
 * Return: no. of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int digs = 0;
    
    unsigned long int x_or;
    
    x_or = n ^ m;
    
    while(x_or)
    {
        digs += x_or & 1;
        x_or >>= 1;
    }
    
    return (digs);
}
