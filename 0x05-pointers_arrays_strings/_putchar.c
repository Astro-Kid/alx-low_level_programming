#include <unistd.h>
/**
 * _putchar - writes the character c to standard output
 * @c: the char to be printed
 * Return: on true out 1
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
