#include "main.h"

/**
 * print_char - function that prints a character
 * @args: arguments
 * Return: number of characters printed
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - function that prints a string
 * @args: arguments
 * Return: number of characters printed
 */

int print_string(va_list args)
{
	int i = 0;
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * print_percent - function that prints a percent
 * @args: arguments
 * Return: number of characters printed
 */

int print_percent(va_list args)
{
	_putchar('%');
	return (1);
}
