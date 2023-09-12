#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all single numbers in base 10,
 * starts from 0 and followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
	putchar(number + '0');
	}

	putchar('\n');

	return (0);
}

