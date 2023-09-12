#include <stdio.h>

/**
 * main - Entry point
 *
 *This program prints all hexadecimal numbers in lowercase
 *              (0 to 9 and a to f), followed by a new line, using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
	putchar(c);
	}

	putchar('\n');

	return (0);
}
