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

/**
 * flags - struct flags
 * @space: space flag
 * @plus: plus flag
 * @hash: hash flag
 * @minus: minus flag
 * @zero: zero flag
 */

typedef struct flags
{
	int space;
	int plus;
	int hash;
	int minus;
	int zero;
} flags_t;

/**
 * length - struct length
 * @h: h flag
 * @hh: hh flag
 * @l: l flag
 * @ll: ll flag
 * @L: L flag
 */

typedef struct length
{
	int h;
	int hh;
	int l;
	int ll;
	int L;
} length_t;

int _putchar(char c);
int _printf(const char *format, ...);
int cases(const char *format, format_t *print, va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_percent();
int length_check(const char *format, int i, length_t *length);
int print_int(va_list args);
int print_unsigned(va_list args);
int flag_check(const char *format, int i, flags_t *flags);
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
