#include "main.h"

/**
 * print_number - print number
 * @n: number to print
 * @count: number character count
 * Return: number of caracter
 */
int print_number(int n, int count)
{
	int n2;
	char *sign = "-";
	char c[1];

	if (n < 0)
	{
		n2 = -n;
		cprintf(sign, 1);
	}
	else
		n2 = n;

	if ((n2 % 10) != n2)
		count = print_number(n2 / 10, count++);

	c[0] = (char)((n2 % 10) + '0');
	cprintf(c, 1);
	return (count);
}
