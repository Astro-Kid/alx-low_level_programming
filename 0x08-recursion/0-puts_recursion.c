#include "main.h"

/**
 * _put_recursion - print a str then a new line
 * @s: the str to print
 * Return: Nothing
 */
void _put_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_put_recursion(s);
}
