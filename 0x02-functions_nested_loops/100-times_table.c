#include "main.h"
/**
 * print_times_table - Prints the times table of a given
 * number
 * @n: The value of a given number
 */
void print_times_table(int n)
{
	int num1;
	int num2;
	int ans;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar('0');

			for (num2 = 1; num2 <= n; num2++)
			{
				_putchar(',');
				_putchar(' ');

				ans = num1 * num2;

				if (ans <= 99)
				{
					_putchar(' ');
				}
				if (ans <= 9)
				{
					_putchar(' ');
				}
				if (ans >= 100)
				{
					_putchar((ans / 100) + '0');
					_putchar((ans / 10) % 10 + '0');
				}
				else if (ans <= 99 && ans >= 10)
				{
					_putchar((ans / 10) + '0');
				}
				_putchar((ans % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
