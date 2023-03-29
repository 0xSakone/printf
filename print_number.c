#include "main.h"
#include <limits.h>

/**
 * print_number_helper - print number
 * @number: number to print
 * Return: number of caracter
 */
int print_number_helper(int number)
{
	int len = 0;
	char c[1];

	if (number / 10)
		len += print_number_helper(number / 10);

	c[0] = (char)(number % 10) + '0';
	cprintf(c, 1);
	len++;

	return (len);
}

/**
 * print_number - print number
 * @number: number to print
 * Return: number of caracter
 */
int print_number(int number)
{
	int len = 0;

	if (number < 0)
	{
		cprintf("-", 1);
		len++;

		if (number == INT_MIN)
		{
			len += print_number_helper(-(number / 10));
			cprintf("8", 1);
			len++;
		}
		else
			len += print_number_helper(-number);
	}
	else
		len += print_number_helper(number);

	return (len);
}

/**
 * print_binary - print binary number
 * @number: number to print
 * Return: number of caracter
 */
int print_binary(unsigned int number)
{
	int len = 0;
	char c[1];

	if (number / 2)
		len += print_binary(number / 2);

	c[0] = (char)(number % 2) + '0';
	cprintf(c, 1);
	len++;

	return (len);
}
