#include <stdio.h>

/**
 * main - print the num of args passed into it
 * @argc: argt count
 * @argv: argts
 *
 * Return: 0
 */
int main (int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
