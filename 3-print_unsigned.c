#include "main.h"

/**
 * print_unsigned - function that prints an unsigned integer
 * @args: arguments
 * Return: number of characters printed
 */
int print_unsigned(va_list args)
{
int count = 0;
unsigned int n = va_arg(args, unsigned int);
unsigned int a = 1;

while (n / a > 9)
a = a * 10;
while (a != 0)
{
_putchar((n / a) +'0');
n = n % a;
a = a / 10;
count++;
}
return (count);
}
