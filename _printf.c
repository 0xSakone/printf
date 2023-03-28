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
		case 'i':
			*count += print_number(va_arg(args, int), 1);
			break;
		case 'd':
			*count += print_number(va_arg(args, int), 1);
			break;
		case '\0':
			return (-1);
		default:
			character_format('%');
			character_format(i);
			*count += 2;
			break;
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
	int count = 0, _dispatcher = 0;
	char *fm;
	va_list args;

	if (!format)
		return (-1);
	va_start(args, format);
	fm = (char *)format;
	while (*fm)
	{
		if (*fm == '%')
		{
			fm++;
			_dispatcher = dispatcher(&count, *fm, args);
			if (_dispatcher == 0)
				continue;
			else if (_dispatcher == -1)
				return (-1);
		}
		else
		{
			count++;
			character_format(*fm);
		}
		fm++;
	}
	va_end(args);
	return (count);
}
