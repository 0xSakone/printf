#include "main.h"

/**
 * string_format - string text formater
 * @s: string
 * Return: number of character
 */
int string_format(char *s, char *output, int count)
{
	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		character_format(*s, output, count);
		count++;
		s++;
	}
	return (count);
}
