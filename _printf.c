#include "main.h"

/**
 * cases - function that selects the correct function to perform the operation
 * @format: format
 * @print: struct
 * @args: arguments
 * Return: number of characters printed
 */
int cases(const char *format, format_t *print, va_list args)
{
	int i = 0, j = 0, count = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (print[j].f != NULL)
			{
				if (format[i + 1] == print[j].f[0])
				{
					count += print[j].func(args);
					break;
				}
				j++;
			}
			if (print[j].f == NULL)
			{
				if (format[i + 1] == '%')
				{
					_putchar('%');
					count++;
				}
				else
				{
					_putchar('%');
					_putchar(format[i + 1]);
					count += 2;
				}
			}
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			i++;
			count++;
		}
	}
	return (count);
}

/**
 * _printf - function that produces output according to a format
 * @format: format
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	format_t print[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{"S", print_S},
		{"p", print_pointer},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL, NULL}
	};
	flags_t flags[] = {
		{" ", print_space},
		{"+", print_plus},
		{"#", print_hash},
		{"-", print_minus},
		{"0", print_zero},
		{NULL, NULL}
	};
	length_t length[] = {
		{"h", 0, 0, 0, 0, 0},
		{"hh", 0, 0, 0, 0, 0},
		{"l", 0, 0, 0, 0, 0},
		{"ll", 0, 0, 0, 0, 0},
		{"L", 0, 0, 0, 0, 0},
		{NULL, 0, 0, 0, 0, 0}
	};
	width_t width[] = {
		{"num", 0, 0},
		{"star", 0, 0},
	};
	precision_t precision[] = {
		{"num", 0, 0, 0},
		{"dot", 0, 0, 0},
		{"star", 0, 0, 0},
	};

	if (format == NULL)
		return (-1);
	va_start(args, format);
	count = cases(format, print, args);
	va_end(args);
	return (count);
}
