#include "main.h"

/**
 * print_rev - function for the reverse string
 * @s: the used string reference pointer
 * Return:0
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
