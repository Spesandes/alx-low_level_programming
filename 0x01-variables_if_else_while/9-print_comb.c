#include <stdio.h>
/**
 * main - Prints numbers followed by a coma
 * and a space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar((numbers % 10) + '0');
	{
		if (numbers == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
