#include "main.h"

/**
 * _memset - const byte
 * @s: mem area to be filled
 * @b: char copy
 * @n: number of copy times
 * Return: point to mem area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
