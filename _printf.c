#include "main.h"

/**
 * dispatcher - dispatch character to function
 * @count: current character printer to screen
 * @i: current format character
 * @format: text format
 * @args: arguments list
 * Return: 1 for skip current while block or 0 for nothing
 */
int dispatcher(int *count, int *i, const char * const format, va_list args)
{
	switch (format[*i])
	{
		case '%':
			character_format(format[*i]);
			*count += 2;
			*i += 1;
			return (1);
		case 'c':
			count++;
			character_format((char)va_arg(args, int));
			break;
		case 'i':
			*count += print_number(va_arg(args, int), 1);
			break;
		case 'd':
			*count += print_number(va_arg(args, int), 1);
			break;
		case 's':
			*count += string_format(va_arg(args, char *));
			break;
		default:
			character_format(format[*i]);
			*count += 2;
			*i += 1;
			return (1);
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
	int i = 0, count = 0;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;
			if (dispatcher(&count, &i, format, args) == 1)
				continue;
		}
		else if (format[i] != '\0')
		{
			count++;
			character_format(format[i]);
		}
		else
			break;
		i++;
	}
	return (count);
}
