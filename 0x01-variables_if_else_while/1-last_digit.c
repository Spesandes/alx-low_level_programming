#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints results
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, j); }
	else if (n == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	}
	else if (n < 6 || n != 0)
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
