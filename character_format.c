#include "main.h"

/**
 * character_format - character formater
 * @c: character
 * @output: buffer
 * @count: buffer count
 * Return: number of character
 */
int character_format(char c, char *output, int count)
{
	output[count] = c;
	count += 1;
	return (count);
}
