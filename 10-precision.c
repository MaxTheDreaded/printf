#include "main.h"

/**
 * precision_check - checks for precision
 * @format: format string
 * @i: index of format string
 * @precision: struct of precision
 * Return: index of format string
 */

int precision_check(const char *format, int i, precision_t *precision)
{
	if (format[i] == '.')
	{
		precision->dot = 1;
		i++;
		if (format[i] == '*')
		{
			precision->star = 1;
			i++;
		}
		else
		{
			while (format[i] >= '0' && format[i] <= '9')
			{
				precision->num = (precision->num * 10) + (format[i] - '0');
				i++;
			}
		}
	}
	return (i);
}

