#include "main.h"

/**
 * mempcpy - function copies @n byte from mem ar @src
 * @n: copies func
 * @src: byte from mem area
 * @dest: to mem area
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
