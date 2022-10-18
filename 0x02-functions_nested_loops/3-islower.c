#include "main.h"
/**
 * _islower - Determines if a character is lower or upper
 * @c: Check the character case
 * Return: 1 if character is lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
