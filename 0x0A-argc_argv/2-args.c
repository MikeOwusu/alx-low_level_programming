#include <stdio.h>
/**
 * main - entry point
 * @argc: count of arguments
 * @argv: the array of parameters
 * Return: return  0 if successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
