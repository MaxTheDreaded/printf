#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @args: arguments
 * Return: number of characters printed
 */
int print_binary(va_list args)
{
	int i = 0, j = 0, count = 0;
	unsigned long int n = va_arg(args, unsigned long int);
	unsigned long int num = n;
	unsigned long int num2 = n;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	while (num2 > 0)
	{
		num2 = num2 / 2;
		i++;
	}
	for (j = 1; j < i; j++)
		num = num * 2 + 1;
	for (j = 0; j < i; j++)
	{
		if (num & n)
			_putchar('1');
		else
			_putchar('0');
		num = num >> 1;
		count++;
	}
	return (count);
}
