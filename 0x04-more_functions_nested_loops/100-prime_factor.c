#include <stdio.h>

/**
 * main - find and print the largest prime factor of VARI
 *
 * Return: Always 0 (Success)
 */
#define VARI 612852475143

int main(void)
{
	unsigned long int i = VAR;
	unsigned long int j = 2;

	while (j < i)
	{
		while (!(i % j))
			i /= j;
		++j;
	}
	printf("%lu\n", i);
	return (0);
}
