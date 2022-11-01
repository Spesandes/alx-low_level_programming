#include "main.h"
/**
 * _strchr - locates a character in string
 * @s: pointer to type int
 * @c: pointer to type char
 * Return: pointer to the first character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
