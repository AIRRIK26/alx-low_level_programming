#include "main.h"

/**
 * print_alphabet - it is for the alphabet casing
 * @ch: verible
 *
 * Return: Always  0.
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar (ch);
		ch++;


	}
	_putchar ('\n');
}
