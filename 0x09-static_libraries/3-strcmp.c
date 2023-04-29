#include "main.h"
/**
 * _strcmp - comares strings
 * @s1: first string
 * @s2: second string
 * Return: alway 0 success
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
