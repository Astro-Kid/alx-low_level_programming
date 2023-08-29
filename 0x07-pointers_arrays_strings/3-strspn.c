#include "main.h"

/**
 * _strspn - length of the prefix of the substring
 * @s: the search string
 * @accept: the measure of prefix
 * Return: number of the bytes in s which consistently bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
