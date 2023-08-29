#include "main.h"

/**
 * _strpbrk - search the sring for a set of any bytes
 * @s: the search string
 * @accept: the set of bytes to be searched
 * Return: if a set is matched - a pointer to the type matched
 * if not - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
