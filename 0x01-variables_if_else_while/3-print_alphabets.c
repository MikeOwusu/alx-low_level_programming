#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 success
 */
int main(void)
{
	int alpha, l_alpha, u_alpha;

	alpha = 'A';
	l_alpha = tolower(alpha);
	u_alpha = toupper(l_alpha);
	for (l_alpha = 'a'; l_alpha <= 'z'; ++l_alpha)
		putchar(l_alpha);
	for (u_alpha = 'A'; u_alpha <= 'Z'; ++u_alpha)
		putchar(u_alpha);
	putchar('\n');
	return (0);
}
