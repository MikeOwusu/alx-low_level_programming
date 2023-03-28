#include "main.h"
/**
 * _strlen - used to know length of string
 * @s: the string
 * Return: always 0 success
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
