#include "main.h"
/**
 * _strlen_recursion - Calculate string length
 * @s: the str count
 * Return: int valuue
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}

