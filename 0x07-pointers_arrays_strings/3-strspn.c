#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to char type
 * @accept: pointer to char variable
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int c = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[j] == accept[j])
					c++;
			}
		}
		else
			return (z);
	}
	return (z);
}
