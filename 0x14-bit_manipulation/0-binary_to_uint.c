#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to int.
 * @b: pointer to a str of 0 and 1
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
    int x = 0;
    int index = 0;
    if(!b || *b)
        return (0);
    for(index = 0; b[index]; index++)
    {
        if(b[index] > 49)
        {
            return 0;
        }
        else if(b[index] == 49)
        {
            x <<= 1;
            x += 1;
        }
        else
        {
            x <<= 1;
        }
        return (x);
    }
    
}
