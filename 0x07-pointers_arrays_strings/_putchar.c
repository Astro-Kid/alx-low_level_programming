#include "main.h"
#include <unistd.h>

/**
 * _putchar - c to stdout
 * @c: prints char
 * Return: 1 on true
 * On error: -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
