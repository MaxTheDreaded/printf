#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct format - struct format
 * @f: format
 * @func: function to use
 */

typedef struct format
{
	    char *f;
	        int (*func)(va_list);
} format_t;

int _putchar(char c);
int _printf(const char *format, ...);
int cases(const char *format, format_t *print, va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_percent();
int print_int(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex_string(unsigned int i, unsigned int hex, char alpha);
int print_hex(va_list args);
int print_binary(va_list args);
int print_HEX(va_list args);
int print_pointer(va_list args);
int print_S(va_list args);
int print_r(va_list args);
int print_R(va_list args);

#endif /* MAIN_H */
