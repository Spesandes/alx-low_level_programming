#include <stdio.h>

/**
 * main - print all combinations of two 2 digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b = a + 1;

	while (a <= 98)
	{
		while (b <= 99)
		{
			putchar('0' + a / 10);
			putchar('0' + a % 10);
			putchar(' ');
			putchar('0' + b / 10);
			putchar('0' + b % 10);
			if (b != 99 || a != 98)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');
	return (0);
}
