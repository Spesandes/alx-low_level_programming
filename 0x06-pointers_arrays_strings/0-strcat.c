#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer of type char
 * @src: pointer of type char
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (i);
}

