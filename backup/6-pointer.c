#include "main.h"

/**
 * print_pointer - function that prints a pointer
 * @args: arguments
 * Return: number of characters printed
 */
int print_pointer(va_list args)
{
	int count = 0;
	unsigned long int n = va_arg(args, unsigned long int);
	unsigned long int a = 1;
	char c;

	_putchar('0');
	_putchar('x');
	count += 2;
	while (n / a > 15)
		a = a * 16;
	while (a != 0)
	{
		if ((n / a) < 10)
			c = (n / a) + '0';
		else
			c = (n / a) + 'a' - 10;
		_putchar(c);
		n = n % a;
		a = a / 16;
		count++;
	}
	return (count);
}

