#include "main.h"
#include <stdio.h>
int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a
 *         natural square root.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);

    return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Finds the natural square root of a number using recursion.
 * @n: The number to find the square root of.
 * @i: The current integer to check as a potential square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a
 *         natural square root.
 */
int find_sqrt(int n, int i)
{
    if (i * i > n)
        return (-1);
    else if (i * i == n)
        return (i);
    else
        return (find_sqrt(n, i + 1));
}
