#include <stdio.h>
/**
 * main - starting point
 *
 * This program prints the lowercase alphabet followed by a newline
 * character using only the putchar function.
 *
 * Return: Always 0
 */
int main()
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}

	putchar('\n');

	return 0;
}
