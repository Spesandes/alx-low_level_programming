#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to type char
 * Return: 0 (Success)
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
