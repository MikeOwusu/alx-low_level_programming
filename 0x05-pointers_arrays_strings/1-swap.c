#include "main.h"
/**
 * swap_int - swaps two values
 * @a: first value to be swapped
 * @b: second value to be swapped
 * Return: always 0 (success)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
