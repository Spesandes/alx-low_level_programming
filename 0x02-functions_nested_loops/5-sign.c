#include "main.h"
/**
 * print_sign - Prints sign of a number
 * @n: Number of which the sign will be printed
 * Return: 1 if number greater than zero,
 *         0 if number is equal to zero,
 *         -1 if less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
