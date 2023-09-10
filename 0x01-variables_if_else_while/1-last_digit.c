#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdlib.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 *
 * This program assigns a random number to 'n' and prints its last digit.
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	m = n % 10
	if (m > 5)
	{
	printf("Last digit of %d is %d and greater than 5", m);
	}
	else if (lastDigit == 0)
	{
	printf("Last digit of %d is %d and is zero", n, m);
	}
	else if (m < 6 && m != 0)
	{
	printf("Last digit pf %d is %d and is less than 6 and not 0", n, m);
	}
	printf('\n')

	return (0);
}
