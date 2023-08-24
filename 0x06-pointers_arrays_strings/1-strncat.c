#include "main.h"
#include <stdio.h>
/**
 * _strcat - function that concats two strings.
 * @dest: destination string pointer.
 * @src: source string pointer.
 * @n: in val.
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
	j++;
	i++;
	}
dest[i] = '\0';
return (dest);
}
