#include "main.h"
/**
 * print_alphabet - Prints lowercase alphabets
 */
void print_alphabet(void)
{
	int alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	;
}
