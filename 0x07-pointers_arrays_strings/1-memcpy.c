#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: char pointer to copy to
 * @src: char pointer from which to copy
 * @n: number of elements to copy
 * Return: pointer to (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);

}
