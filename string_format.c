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

/**
 * big_string_format - string text formater
 * @count: current character count
 * @args: arguments
 * Return: number of character
 */
int big_string_format(int *count, va_list args)
{
	char *s, hex[2];
	int temp;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		if (*s > 32 && *s < 126)
		{
			cprintf(s, 1);
			*count += 1;
		}
		else
		{
			cprintf("\\x", 2);
			temp = ((unsigned char)*s) / 16;
			hex[0] = (temp < 10) ? (temp + '0') : (temp - 10 + 'A');
			temp = ((unsigned char)*s) % 16;
			hex[1] = (temp < 10) ? (temp + '0') : (temp - 10 + 'A');
			cprintf(hex, 2);
			*count += 4;
		}
		s++;
	}
	return (*count);
}
