#include "main.h"

/**
 * string_format - string text formater
 * @s: string
 * Return: number of character
 */
int string_format(char *s)
{
    int c = 0, i = 0;
    char cc;
    if (s == NULL)
        s = "(null)";
    while (s[i] != '\0')
    {
        cc = s[i];
        cprintf(&cc, 1);
        i++;
        c++;
    }
	return c;
}
