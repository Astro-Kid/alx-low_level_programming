#include "main.h"

/**
 * swap_int - take in two ints and swaps them
 * @author Bupe
 * @a: swap and store address of b
 * @b: swap and store address of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
