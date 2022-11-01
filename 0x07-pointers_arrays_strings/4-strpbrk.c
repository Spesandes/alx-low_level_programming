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
	char *ip;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accep[j] == s[i])
			{
				ip = &s[i];
				return (ip);
			}
			j++;
		}
		i++;
	}
	return (0);
}
