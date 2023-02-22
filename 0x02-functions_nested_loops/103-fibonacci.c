#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000.
 * Return: 0 success
 */

int main(void)

{

	int i = 0;
	long j = 1, k = 2, c_sum = k;

	while (k + j < 4000000)
	{
	k += j;
	if (k % 2 == 0)
	c_sum += k;
	j = k - j;
	++i;
	}
	printf("%ld\n", c_sum);
	return (0);
}