#include "main.h"

/**
  * cases - cases c, s & % for _printf
  * @format: character string
  * @i: index
  * @args: arguments
  * Return: number of characters printed
  */
int cases(const char *format, int i, va_list args)
{
	int j = 0, count = 0;
	char *str;

	switch (format[i])
	{
		case 'c':
			_putchar(va_arg(args, int));
			count++;
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(null)";
			for (j = 0; str[j] != '\0'; j++)
			{
				_putchar(str[j]);
				count++;
			}
			break;
		case '%':
			_putchar('%');
			count++;
			break;
		default:
			_putchar('%');
			_putchar(format[i]);
			count += 2;
			break;
	}

	return (count);
}

/**
  * _printf - produces output according to a format
  * @format: character string
  * Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += cases(format, i, args);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
