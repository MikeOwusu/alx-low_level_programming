#include <ctype.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lower case 10 times
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		char c, cl;

		c = 'A';
		cl = tolower(c);
		while (cl <= 'z')
		{
			_putchar(cl);
			cl++;
		}
		_putchar('\n');
		i++;
	}
}
