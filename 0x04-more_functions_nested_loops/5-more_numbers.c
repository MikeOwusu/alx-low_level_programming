#include "main.h"
/**
 * more_numbers - ouputs 10 numbers 0-14
 *
 * Return: always 0 (success)
 */
void more_numbers(void)
{
	int a;
	int j;

	for (a = 0; a < 10; a++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
