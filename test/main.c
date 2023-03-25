#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    // unsigned int ui;
    // void *addr;
    char *s = "Abdramane Sakone";

    // More C - character and String test
    len = _printf("Character Test:[%c, %c] %c %c\n", 'A', 'B', '0', 'O');
    len2 = printf("Character Test:[%c, %c] %c %c\n", 'A', 'B', '0', 'O');
    _printf("Length:[%d, %i]\n", len, len2);

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len2);

    len = _printf("Your name:[%s]\n", s);
    len2 = printf("Your name:[%s]\n", s);
    _printf("Length:[%d, %i]\n", len, len2);

    len = _printf("Character Test:[%c, %c]\n", 'A', 'B');
    len2 = printf("Character Test:[%c, %c]\n", 'A', 'B');
    _printf("Length:[%d, %i]\n", len, len2);
    // len2 = printf("Let's try to printf a simple sentence.\n");
    // ui = (unsigned int)INT_MAX + 1024;
    // addr = (void *)0x7ffe637541f0;
    // _printf("Length:[%d, %i]\n", len, len);
    //len = _printf("Your name:[%s]\n", s);
    // printf("Length:[%d, %i]\n", len2, len2);
    // _printf("Last length:[%d]\n", len);
    /// _printf("Negative:[%d]\n", -762534);
    // printf("Negative:[%d]\n", -762534);
    // _printf("Unsigned:[%u]\n", ui);
    // printf("Unsigned:[%u]\n", ui);
    // _printf("Unsigned octal:[%o]\n", ui);
    // printf("Unsigned octal:[%o]\n", ui);
    // _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    // printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    // _printf("Character:[%c]\n", 'H');
    // printf("Character:[%c]\n", 'H');
    // _printf("String:[%s]\n", "I am a string !");
    // printf("String:[%s]\n", "I am a string !");
    // _printf("Address:[%p]\n", addr);
    // printf("Address:[%p]\n", addr);
    // len = _printf("Percent:[%%]\n");
    // len2 = printf("Percent:[%%]\n");
    // _printf("Len:[%d]\n", len);
    // printf("Len:[%d]\n", len2);
    // _printf("Unknown:[%r]\n");
    // printf("Unknown:[%r]\n");
    return (0);
}
