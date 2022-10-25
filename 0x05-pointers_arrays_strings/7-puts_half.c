#include "main.h"
/**
 * puts_half - prints half of a string followed by a newline
 * @str: string of type char
 */
void puts_half(char *str)
{
	int myStr;

	for (myStr = 0; str[myStr] != '\0'; myStr++)
	{
		;
	}

	myStr++;

	for (myStr = myStr / 2; str[myStr] != '\0'; myStr++)
	{
		_putchar(str[myStr]);
	}
	_putchar('\n');
}

