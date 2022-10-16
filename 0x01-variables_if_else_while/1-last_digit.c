#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Reads the last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	o = n % 10;
	if (o > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, o);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
		return (0);
}
