#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals
 * @a: array to use
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size)
{
	int i, dia1 = 0, dia2 = 0;

	for (i = 0; i < size; i++)
	{
		dia1 += a[(size * i) + i];
		dia2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", dia1, dia2);
}
