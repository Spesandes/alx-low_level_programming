#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to char variable
 * @accept: pointer to a char variable
 * Return: pointer to a byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; ++i)
	{
		for (j = 0; accept[j]; ++j)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
