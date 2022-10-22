#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers starting
 * with 1 and 2 followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	long int x;
	long int y;
	long int sum;

	count = 2;
	x = 1;
	y = 2;
	printf("%lu, ", x);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", y);
		}
		else
		{
			printf("%lu, ", y);
		}

		sum = y;
		y = y + x;
		x = sum;
		count++;
	}
	return (0);
}
