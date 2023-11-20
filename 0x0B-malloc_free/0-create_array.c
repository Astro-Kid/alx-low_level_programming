#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * and ints it with a specif char
 * @size: array size
 * @c: int value
 *
 * Return: a poiter to the array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = 0;

	return (array);
}
