#include "main.h"
/**
 * _pow_recursion - the power
 * @x: number to be raised
 * @y: number of times to be raised
 * Return: return final answer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, (y - 1)));
}
