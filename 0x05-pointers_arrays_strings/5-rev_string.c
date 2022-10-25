#include "main.h"
/**
 * rev_string - this function reverses a string
 * @s: string of type char
 */
void rev_string(char *s)
{
	char c;
	int i, j, y;

	j = 0;
	y = 0;
	while (s[j] != '\0')
	{
		j++;
	}

	y = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		c = s[i];
		s[i] = s[y];
		s[y--] = c;
	}
}
