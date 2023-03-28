#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int cases_cs(const char *format, int i, va_list args);
int cases_di(const char *format, int index, va_list args);
int cases_u(const char *format, int index, va_list args);
int cases_o(const char *format, int index, va_list args);
int cases_x(const char *format, int index, va_list args);
int cases_X(const char *format, int index, va_list args);
int cases_p(const char *format, int index, va_list args);
int cases_r(const char *format, int index, va_list args);
int cases_R(const char *format, int index, va_list args);
int cases_b(const char *format, int index, va_list args);
int cases_S(const char *format, int index, va_list args);
int cases_rot13(const char *format, int index, va_list args);
int cases_rev(const char *format, int index, va_list args);

#endif /* MAIN_H */
