#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: pointer to char
 * @src: pointer to char
 * Return: copied dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s;

	for (s = 0; s < n && src[s] != '\0'; s++)
		dest[s] = src[s];
	
	for (; n > s; s++)
		dest[s] = '\0';

	return (dest);
}
