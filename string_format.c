#include "main.h"

/**
 * string_format - string text formater
 * @count: current character count
 * @args: arguments
 * Return: number of character
 */
int string_format(int *count, va_list args)
{
	int c = 0;
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		cprintf(s, 1);
		c++;
		s++;
		*count += 1;
	}
	return (*count);
}
