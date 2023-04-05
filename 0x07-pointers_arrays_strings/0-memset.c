#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointing pointing to the mem
 * @b: the byte to be used
 * @n: the bytes to be filled
 * Return: returns the pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
