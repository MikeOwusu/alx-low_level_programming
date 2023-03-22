#include <stdio.h>

int main() {
   char str[] = "Hello, world!";
   int i;

   for (i = 0; str[i] != '\0'; i++) {
      putchar(str[i]);
   }

   putchar('\n');

   return 0;
}
