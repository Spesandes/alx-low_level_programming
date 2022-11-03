#include "main.h"
/**
 * divisor - checks if a number can be divided
 * @i: numerator
 * @j: denominator
 * Return: 0 if answer has no remainder, 1 if
 * answer has a remainder
 */
int divisor(int i, int j);

int divisor(int i, int j)
{
	if (i % j == 0)
		return (0);

	if (j == i / 2)
		return (1);

	return (divisor(i, j + 1));
}

/**
 * is_prime_number - check if a number is prime
 * @n: any given number, to check
 *
 * Return: 0 if the number is not prime, 1 if
 * the number is prime
 */
int is_prime_number(int n)
{
	int j = 2;

	if (n <= 1)
		return (0);

	else if (n >= 2 && n <= 3)
		return (1);

	return (divisor(n, j));
}
