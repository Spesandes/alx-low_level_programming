#include "main.h"
/**
 * print_alphabet_x10 - Prints 10x the alphabets in lowercase
 */
void print_alphabet_x10(void)
{
	int line = 0;
	int alpha;

	while (line <= 9)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		line++;
	}
	;
}
