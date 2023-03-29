#include "main.h"

/**
 * flag_check - checks for flags
 * @format: format string
 * @i: index of format string
 * @flags: struct of flags
 * Return: index of format string
 */
int flag_check(const char *format, int i, flags_t *flags)
{
	while (format[i] == ' ' || format[i] == '+' || format[i] == '#')
	{
		if (format[i] == ' ')
			flags->space = 1;
		if (format[i] == '+')
			flags->plus = 1;
		if (format[i] == '#')
			flags->hash = 1;
	}
	return (i);
}
