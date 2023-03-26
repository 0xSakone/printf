#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/*
 * charater_Formatter
 */
int character_format(char c);
/*
 * print character
 */
int cprintf(char *buf, int len);
/*
 * print number
 */
int print_number(int n, int count);
/*
 * string Formatter
 */
int string_format(char *s);
/*
 * Dispatcher Function
 */
int dispatcher(int *count, char i, va_list args);

int _printf(const char * const format, ...);
int _strlen(char *s);


#endif
