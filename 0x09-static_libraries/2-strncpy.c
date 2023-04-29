#include "main.h"
/**
 * _strncpy - to copy string
 * @dest: destination
 * @src: the string
 * @n: the number of bytes
 * Return: always 0 success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
