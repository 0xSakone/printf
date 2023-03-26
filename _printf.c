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
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case '%':
					count++;
					current_character = format[i];
					cprintf(&current_character, 1);
					i++;
					continue;
				case 'c':
					count++;
					character_format((char)va_arg(args, int));
					break;
				case 's':
					count += string_format(va_arg(args, char *));
					break;
			}
		}
		else if (format[i] != '\0')
		{
			count++;
			current_character = format[i];
			cprintf(&current_character, 1);
		}
		i++;
	}
	return (count);
}
