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
		for (line = 0; line <= (size - 1); line++)
		{
			for (space = 0; spaces < (size - 1) - line; space--)
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
