#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabet, excluding 'e' and 'q',
 * followed by a newline character using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != 'e' && c != 'q')
	{
	putchar(c);
	}
	}

	putchar('\n');

	return (0);
}
