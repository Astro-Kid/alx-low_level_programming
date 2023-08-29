#include "main.h"

/**
 * _memcpy - function copies @n byte from memory area of @src
 * memory area dest
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
