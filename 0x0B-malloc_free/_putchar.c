#include "main.h"
#include <unistd.h>
/**
 * _putchar - wites the char c to stdout
 *@c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
