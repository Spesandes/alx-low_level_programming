#include "main.h"
/**
 * print_triangle - This function prints a triangle
 * @size: The size of the base of the triangle
 */
void print_triangle(int size)
{
	int i, j, z;

	if (size > 0)
	{
		for (i = 1; i <= size; ++i)
		{
			for (j = size - i; j > 0; --j)
				_putchar(' ');
			for (x = 0; x < i; ++k)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
