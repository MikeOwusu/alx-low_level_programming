#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char alpha, l_al;

	alpha = 'A';
	l_al = tolower(alpha);
	for (l_al = 'a'; l_al <= 'z'; ++l_al)
		if (l_al != 'e' && l_al != 'q')
			putchar(l_al);
	putchar('\n');
	return (0);
}
