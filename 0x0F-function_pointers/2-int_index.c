#include "function_pointers.h"
/**
 * int_index - to search for an integer
 * @array: input array of integer
 * @size: size of the array.
 * @cmp: pointer to the function
 * Return: -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
