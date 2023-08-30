#include "main.h"
#include <stdio.h>


int _sqrt(int n,int i);
/**
 * _sqrt_recursion - return the root
 * @n: number to calculated
 * Return: sqrt root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * sqrt - calculate natural sqrt root
 * @n: num to calc the root
 * @i: iteratenum
 * Return: the natural sqrt root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if  (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
