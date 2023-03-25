#include "main.h"

/**
 * string_format - string text formater
 * @s: string
 * Return: number of character
 */
int string_format(char *s)
{
	cprintf(s, _strlen(s));
	return (_strlen(s) - 1);
}
