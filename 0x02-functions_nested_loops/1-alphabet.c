#include "holberton.h"

/**
 * print_alphabet - Prints alphabate in lower case
 *
 * Return: Void
 */

void print_alphabet(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}

_putchar('\n');
}
