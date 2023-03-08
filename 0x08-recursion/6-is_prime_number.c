#include "main.h"
#include <stdio.h>
int check_divisors(int n, int divisor);
/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    /* Check for base cases */
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    /* Check if n is even */
    if (n % 2 == 0)
        return 0;
    /* Check odd divisors */
    return check_divisors(n, 3);
}

/**
 * check_divisors - checks if a number is divisible by odd numbers
 * starting from a given divisor
 * @n: the number to check
 * @divisor: the first divisor to check (must be odd)
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_divisors(int n, int divisor)
{
    if (n % divisor == 0)
        return 0;
    if (divisor * divisor > n)
        return 1;
    return check_divisors(n, divisor + 2);
}
