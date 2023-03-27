#include "main.h"

/**
 * string_format - string text formater
 * @s: string
 * @output: buffer
 * @count: buffer count
 * Return: number of character
 */
int string_format(char *s, char *output, int count)
{
	if (s == NULL)
		s = "(null)";

	if (s[0] == '\0')
	{
		output[count] = '\0';
		count++;
	}
	while (*s)
	{
		character_format(*s, output, count);
		count++;
		s++;
	}
	return (count);
}
