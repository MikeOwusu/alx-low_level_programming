#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_alphabet - prints alphabet in lower case
 *
 * Return: always 0 (success)
 */


void print_alphabet(void)
{
	char c, cl;

	c = 'A';
	cl = tolower(c);
	for (cl = 'a'; cl <= 'z'; cl++)
		_putchar(cl);
	_putchar('\n');
}
