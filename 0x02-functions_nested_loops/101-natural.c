#include <stdio.h>
/**
 * main - Prints all the natural numbers below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	x = 1;
	y = 0;

	while (x < 1024)
	{
		if (x % 3 == 0)
			y = y + x;
		else if (x % 5 == 0)
			y = y + x;

		x++;
	}
	printf("%d\n", y);

	return (0);
}
