#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, including
 * the terminating null byte, to the buffer pointed to by dest
 * @dest: pointer of type char
 * @src: pointer of type char
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}

	dest[c] = '\0';

	return (dest);
}
