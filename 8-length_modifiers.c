#include "main.h"

/**
 * length_check - checks for length modifiers
 * @format: format string
 * @i: index of format string
 * @length: struct of length modifiers
 * Return: index of format string
 */

int length_check(const char *format, int i, length_t *length)
{
	if (format[i] == 'h')
	{
		if (format[i + 1] == 'h')
		{
			length->hh = 1;
			i++;
		}
		else
			length->h = 1;
	}
	if (format[i] == 'l')
	{
		if (format[i + 1] == 'l')
		{
			length->ll = 1;
			i++;
		}
		else
			length->l = 1;
	}
	if (format[i] == 'L')
		length->L = 1;
	return (i);
}

