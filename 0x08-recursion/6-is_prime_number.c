#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - Returns if num is prime
 * @n: the number to check
 * Return: int value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if num is prime
 * @n: the numto be checked
 * @i: the iteration times
 * Return: 1 for prime of 0 composite
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
