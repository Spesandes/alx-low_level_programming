#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: string of type char
 */
void puts2(char *str)
{
	int myStr;

	for (myStr = 0; str[myStr] != '\0'; myStr++)
	{
		if (myStr % 2 == 0)
		{
			_putchar(str[myStr]);
		}
		_putchar('\n');
	}
}
