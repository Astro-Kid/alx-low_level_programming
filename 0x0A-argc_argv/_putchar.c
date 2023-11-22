#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the char
 * @c: The char to print
 *
 * Return: On success 1
 * On error, -1 is returned and the error is set appropriatly
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
