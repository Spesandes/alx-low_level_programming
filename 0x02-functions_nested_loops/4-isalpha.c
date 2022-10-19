#include "main.h"
/**
 * _isalpha - Determines if whether a character is an alphabet
 * @c: The character in question
 *
 * Return: 1 if character is an alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
