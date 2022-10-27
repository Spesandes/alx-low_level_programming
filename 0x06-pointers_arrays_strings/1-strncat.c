#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to type char
 * @src: 2nd pointer to type char
 * @n: index
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s, t;

	for (i = 0; dest[s] != '\0'; s++)
		;
	for (t = 0; src[t] != '\0' && n > 0; t++, n--, s++)
	{
		dest[s] = src[t];
	}
	return (dest);
}
