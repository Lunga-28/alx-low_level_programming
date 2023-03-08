#include "main.h"
#include <stdio.h>
/**
 * factorial - computes the factorial of a given number
 * @n: the number to compute the factorial of
 *
 * Return: the factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0) /* Check for negative input. */
		return (-1);

	if (n == 0) /* Base case. */
		return (1);

	/* Recursive case. */
	return (n * factorial(n - 1));
}
