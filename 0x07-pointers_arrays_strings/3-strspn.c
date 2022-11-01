#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to type char
 * @accept: pointer to type char
 * Return: number of bytes in the initial segment of @s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (c);
}
