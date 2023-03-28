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
			character_format('%');
			character_format(i);
			*count += 2;
			break;
	}
	return (0);
}
