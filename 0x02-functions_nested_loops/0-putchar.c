#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main()
{
   char str[]="_putchar";
   int i;

   for (i = 0; str[i] != '\0'; i++) {
      putchar(str[i]);
   }
   putchar('\n');
   return 0;
}
