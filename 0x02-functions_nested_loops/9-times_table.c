#include "main.h"
/**
 * times_table - Prints the 9 times tables, starting from 0
 */
void times_table(void)
{
	int num1;
	int num2;
	int answer;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar('0');

		for (num2 = 1; num2 <= 9; num2++)
		{
			_putchar(',');
			_putchar(' ');

			answer = num1 * num2;

			if (answer <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((answer / 10) + '0');
			}
			_putchar((answer % 10) + '0');
		}
		_putchar('\n');
	}
}
