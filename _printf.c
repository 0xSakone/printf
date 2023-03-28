#include "main.h"

/**
 * dispatcher - dispatch character to function
 * @count: current character printer to screen
 * @i: current format character
 * @args: arguments list
 * @output: buffer
 * Return: 1 for skip current while block or 0 for nothing
 */
int dispatcher(int count, char i, va_list args, char *output)
{
	switch (i)
	{
		case '%':
			count = character_format('%', output, count);
			break;
		case 'c':
			count = character_format((char)va_arg(args, int), output, count);
			break;
		case 's':
			count = string_format(va_arg(args, char *), output, count);
			break;
		default:
			count = character_format('%', output, count);
			count = character_format(i, output, count);
			break;
	}
	return (count);
}

/**
 * _printf - printf function simulator
 * @format: text format
 * Return: number of character
 */
int _printf(const char * const format, ...)
{
	int count = 0;
	char *fm;
	char output[2048];
	va_list args;

	if (_strlen((char *)format) == 0)
		return (-1);

	va_start(args, format);
	fm = (char *)format;
	while (*fm)
	{
		if (*fm == '%')
		{
			fm++;
			count = dispatcher(count, *fm, args, output);
		}
		else
			count = character_format(*fm, output, count);
		fm++;
	}
	va_end(args);
	cprintf(output, count);
	return (count);
}
