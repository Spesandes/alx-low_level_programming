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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, 8);
	}
		return (0);
}
