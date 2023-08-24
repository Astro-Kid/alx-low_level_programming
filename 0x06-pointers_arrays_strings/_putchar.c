#include <unistd.h>

/**
 * _putchar - write the char c to stdout
 * @c: The char to print
 * Return: on true 1
 * on error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
