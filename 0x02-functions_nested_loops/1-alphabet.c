#include "main.h"

/**
 * 
 * @n: prints new line
 * Return;: Always  0.
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
