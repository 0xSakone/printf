#include "main.h"

/**
 * string_format - string text formater
 * @s: string
 * Return: number of character
 */
int string_format(char *s)
{
	int c = 0;

	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		cprintf(s, 1);
		c++;
		s++;
	}
	return (c);
}
