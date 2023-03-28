#include "main.h"

/**
 * print_number - print number
 * @number: number to print
 * Return: number of caracter
 */
int print_number(int number)
{
	int len = 0;
	char c[1];

	if (number < 0)
	{
		cprintf("-", 1);
		number = -number;
		len++;
	}

	if (number / 10)
	{
		len += print_number(number / 10);
	}

	c[0] = (char)(number % 10) + '0';
	cprintf(c, 1);
	len++;

	return (len);
}
