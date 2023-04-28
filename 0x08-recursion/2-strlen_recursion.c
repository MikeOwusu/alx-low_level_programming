#include "main.h"
/**
 * _strlen_recursion - find length
 * @s: the string
 * Return:This will return void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
