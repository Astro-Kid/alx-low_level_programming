#include "main.h"
/**
 * leet - encoder
 * @n: in value
 * Return: n value
 */
char *leet(char *n)
{
	int q, w;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (q = 0; n[q] != '\0'; q++)
	{
		for (w = 0; w < 10; w++)
		{
			if (n[q] == s1[w])
			{
				n[q] = s2[w];
			}
		}
	}
	return (n);
}
