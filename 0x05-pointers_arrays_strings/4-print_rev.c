#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a newline
 * @s: string of type char
 */
void print_rev(char *s)
{
	int i, j;

	j = 0;
	while (s[n] != '\0')
		j++;
	
	for (i = j - 1; i >=0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
