#include "main.h"
/**
 * main - prints a string to stdout followed by a newline
 * @str: String character
 * Return: String characters
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		i++;
	}
	_putchar('\n');
}
