#include "main.h"

/**
 * _printf - printf function simulator
 * @format: text format
 * Return: number of character
 */
int _printf(const char * const format, ...)
{
	int i = 0, count = 0;
	char current_character;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		current_character = format[i];
		if (current_character == '%')
		{
			i++;
			current_character = format[i];
			switch (current_character)
			{
				case 'c':
					count++;
					character_format((char)va_arg(args, int));
					break;
				case 'i':
					count += print_number(va_arg(args, int), 1);
					break;
				case 'f':
					count += print_number(va_arg(args, int), 1);
					break;
				case 'd':
					count += print_number(va_arg(args, int), 1);
					break;
				case 's':
					count += string_format(va_arg(args, char *));
					break;
			}
		}
		else
		{
			count++;
			cprintf(&current_character, 1);
		}
		i++;
	}
	return (count);
}
