#include "main.h"
/**
 * print_triangle - This function prints a triangle
 * @size: The size of the base of the triangle
 */
int print_triangle(int size)
{
	int line, charactor, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= size; line++)
		{
			for (space = size - row; spaces >= 1; space--)
			{
				_putchar(' ');
			}
			for (charactor = 1; charactor <= line; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
