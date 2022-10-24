#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\n')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putch6ar(s[i]);

	_putchar('\n');
}
