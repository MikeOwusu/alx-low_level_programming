#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to a newly allocated memory space
 * @str: the string
 * Return: pointing to the new memory space
 */
char *_strdup(char *str)
{
	char *new_al;

	unsigned int i;

	unsigned int j;

	i = 0;
	j = 0;

	if (str == NULL)
		return (NULL);
	while (str[j])
		j++;
	new_al = malloc(sizeof(char) * (j + 1));
	if (new_al == NULL)
		return (NULL);
	while ((new_al[i] = str[i]) != '\0')
		i++;
	return (new_al);
}
