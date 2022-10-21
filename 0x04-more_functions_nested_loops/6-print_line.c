#include "main.h"
/**
 * print_line - draws a line in the terminal
 * @n: number of times the character is printed
 */
void print_line(int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
