#include "main.h"

/**
 * _isalpha checks if is upper or lowecase
 * @c: is c an integer argument ?
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
