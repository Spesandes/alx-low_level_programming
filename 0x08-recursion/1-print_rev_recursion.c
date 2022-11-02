#include "main.h"
/**
 * _print_recursion - prints a string in reverse
 * @s: pointer to char variable that contains a string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
	_putchar('\n');
}
