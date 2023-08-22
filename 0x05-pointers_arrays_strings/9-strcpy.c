#include "main.h"

/**
 * *_strcpy - copies the str by src
 * @dest: char type string
 * @src: char type string
 * Description: copy the str ptd by  the ptr 'src'
 * ptr to 'dest'
 * Return: 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
