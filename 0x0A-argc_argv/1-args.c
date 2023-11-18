#include <stdio.h>

/**
 * main - prints num of arguments passed into it
 * @argc: Argument count
 * @argv: Arguments
 *
 * Retur: 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
