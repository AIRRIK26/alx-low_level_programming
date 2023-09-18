#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Input string.
 * Return: No return.
 */
void rev_string(char *s)
{
	int length = 0;
	char *start = s;
	char *end = s;
	char temp;

	if (s == NULL)
		return;

	/* Calculate the length of the string */
	while (*end)
	{
		length++;
		end++;
	}

	end--;

	/* Swap characters from start and end */
	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}

