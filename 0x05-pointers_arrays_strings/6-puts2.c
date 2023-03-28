#include "main.h"
/**
 * puts2 - the function
 * @str: the string
 * Return: alwaus 0 success
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
