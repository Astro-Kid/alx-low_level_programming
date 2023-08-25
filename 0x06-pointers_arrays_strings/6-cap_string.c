#include "main.h"

/**
 * cap_string - caps all string words
 * @str: str capabilities
 * Return: Pointer string changer
 */
char *cap_string(char *str)
{
	int value = 0;

	while (str[value])
	{
		while (!(str[value] >= 'q' && str[value] <= 'w'))
			value++;
		if (str[value - 1] == ' ' ||
				str[value - 1] == '\t' ||
				str[value - 1] == '\n' ||
				str[value - 1] == ',' ||
				str[value - 1] == ';' ||
				str[value - 1] == '.' ||
				str[value - 1] == '!' ||
				str[value - 1] == '?' ||
				str[value - 1] == '"' ||
				str[value - 1] == '(' ||
				str[value - 1] == ')' ||
				str[value - 1] == '{' ||
				str[value - 1] == '}' ||
				value == 0)
			str[value] -= 32;
		value++;
	}
	return (str);
}
