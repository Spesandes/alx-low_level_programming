#include "main.h"
/**
 * print_number - prints an integer one character each time
 * @n: int variable containing the number to print
 */
void print_number(int n)
{
	int i = (n < 0 ? -1 : 1);

	if (n / 10 == 0)
	{
		if (i == -1)
			_putchar('-');
		_putchar(n * i + '0');
	}
	else
	{
		print_number(n / 10);
		_putchar(n % 10 * i + '0');
	}
}
