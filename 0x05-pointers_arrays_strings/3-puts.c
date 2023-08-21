#include "main.h"

/**
 * _put - print string
 * @str: - pointer to string
 * Return: string and new line
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
