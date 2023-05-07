#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to int.
 * @b: pointer to a str of 0 and 1
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;

    if (b == NULL)
        return 0;

    for (; *b; b++) {
        if (*b != '0' && *b != '1')
            return 0;

        num = num << 1;
        if (*b == '1')
            num = num | 1;
    }

    return num;
}
