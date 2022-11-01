#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to char variable
 * @accept: pointer to a char variable
 * Return: pointer to a byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}