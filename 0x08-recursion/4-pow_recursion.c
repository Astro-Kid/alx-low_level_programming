#include "main.h"

/**
 * _pow_recursion - Return the value of x raised to the power of y
 * @x: the value of mult
 * @y: the times of multi
 * Return: the value mult y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
