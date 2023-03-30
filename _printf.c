#include "main.h"

/**
 * _1bit - printf function simulator
 * @count: text format
 * @c: character
 * Return: number of character
 */
int _1bit(int *count, char c)
{
	*count += 1;
	cprintf(&c, 1);
	return (*count);
}

/**
 * _printf - printf function simulator
 * @format: text format
 * Return: number of character
 */
int _printf(const char * const format, ...)
{
	int count = 0, _dispatcher = 0, i = 0, find = 0;
	char *fm;
	va_list args;
	func _f[] = {
		{'c', character_format}, {'s', string_format}, {'d', number_format},
		{'i', number_format}, {'b', binary_format}, {'%', perc_format}, {'\0', NULL}
	};

	if (!format)
		return (-1);
	va_start(args, format);
	
	fm = (char *)format;
	while (*fm)
	{
		if (*fm == '%')
		{
			find = 0;
			fm++;
			for (i = 0; i < (int)(sizeof(_f) / sizeof(func)); i++)
			{
				if (*fm == _f[i].c)
				{
					_dispatcher = _f[i].call(&count, args);
					find = 1;
					if (_dispatcher == -1)
						return (-1);
				}
			}
			if (find == 0)
			{
				_1bit(&count, '%');
				_1bit(&count, *fm);
			}
		}
		else
			_1bit(&count, *fm);
		fm++;
	}
	va_end(args);
	return (count);
}
