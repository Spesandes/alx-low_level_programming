#include <stdio.h>
/**
 * main - Prints numbers in ascending order with a 
 * comma and a space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar((number % 10) + '0');
		if (number == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
