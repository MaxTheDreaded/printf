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

/**
 * width - struct width
 * @num: number
 * @star: star flag
 */

typedef struct width
{
	int num;
	int star;
} width_t;

/**
 * precision - struct precision
 * @num: number
 * @dot: dot flag
 * @star: star flag
 */

typedef struct precision
{
	int num;
	int dot;
	int star;
} precision_t;

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
int precision_check(const char *format, int i, precision_t *precision);
int flag_check(const char *format, int i, flags_t *flags);
int length_check(const char *format, int i, length_t *length);
int print_R(va_list args);
int width_check(const char *format, int i, width_t *width);

#endif /* MAIN_H */
