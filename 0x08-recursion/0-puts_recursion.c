#include "main.h"
/**
 *_puts_recursion - function for printing using recursion
 *@s: the string
 *Return: void will be return
 */
void _puts_recursion(char *s)
{
	if (*s != '/0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('/n');
}
