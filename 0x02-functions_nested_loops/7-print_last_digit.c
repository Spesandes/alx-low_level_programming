#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number from which the last digit is to be printed
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
		i = (i * (-1));
	_putchar(i + '0');
	return (i);
}
