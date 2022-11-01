#include "main.h"
/**
 * _strchr - locates a character in string
 * @s: pointer to type int
 * @c: pointer to type char
 * Return: pointer to the first character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);

		s++;

	}

	return (s + 1);
}
