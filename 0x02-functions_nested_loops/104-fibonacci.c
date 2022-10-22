#include <stdio.h>
/**
 * main - Prints the 1st 98 Fibonacci numbers
 * 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int x;
	unsigned long int y;
	unsigned long int z;
	unsigned long int y1;
	unsigned long int y2;
	unsigned long int z1;
	unsigned long int z2;

	y = 1;
	z = 2;

	printf("%lu", j);

	for (x = 1; x < 91; x++)
	{
		printf(", %lu", k);
		z += y;
		y = z - y;
	}

	y1 = y / 1000000000;
	y2 = y % 1000000000;
	z1 = z / 1000000000;
	z2 = z % 1000000000;

	for (x = 92; x < 99; ++x)
	{
		printf(", %lu", z1 + (z2 / 1000000000));
		printf("%lu", z2 % 1000000000);
		z1 = z1 + y1;
		y1 = z1 - y1;
		z2 = z2 + y2;
		j2 = z2 - y2;
	}
	printf("\n");

	return (0);
}
