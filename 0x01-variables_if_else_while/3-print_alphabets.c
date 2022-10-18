#include <stdio.h>

/**
 * main - prints alpha in lower and uppoer case
 * Return: Always 0 (success)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
