#include "main.h"

/**
 * dispatcher - dispatch character to function
 * @count: current character printer to screen
 * @i: current format character
 * @args: arguments list
 * Return: 1 for skip current while block or 0 for nothing
 */
int dispatcher(int *count, char i, va_list args)
{
	switch (i)
	{
		case '%':
			character_format('%');
			*count += 1;
			break;
		case 'c':
			*count += 1;
			character_format((char)va_arg(args, int));
			break;
		case 's':
			*count += string_format(va_arg(args, char *));
			break;
		default:
			return (-1);
	}
	return (0);
}

/**
 * _printf - printf function simulator
 * @format: text format
 * Return: number of character
 */
int _printf(const char * const format, ...)
{
	int count = 0, _dispatch = 0;
	char *fm;
	va_list args;

	va_start(args, format);
	fm = (char *)format;
	while (*fm)
	{
		if (*fm == '%')
		{
			fm++;
			_dispatch = dispatcher(&count, *fm, args);
			if (_dispatch == 1)
				continue;
		}
		else
		{
			count++;
			character_format(*fm);
		}
		fm++;
	}
	character_format('\0');
	return (count);
}
