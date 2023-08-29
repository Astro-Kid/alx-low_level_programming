#include "main.h"

/**
 * _strchr - locate a char in  a str
 * @s: the searched string
 * @c: the located string
 * Return: c is found - first occurunce pointer
 * if not - NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
