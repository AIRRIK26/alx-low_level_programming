#include "main.h"

/**
 * print_alphabet_x10 - function
 *
 * Return - 0
 */

void print_alphabet_x10(void)
{
int b = 0;
while (b < 10)
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
b++;
}
}
