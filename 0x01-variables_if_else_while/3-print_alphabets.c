#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the alphabet in lowercase and uppercase
 * using the putchar function.
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

    for (c = 'A'; c <= 'Z'; c++) 
    {
        putchar(c);
    }

    putchar('\n');

    return 0;
}

