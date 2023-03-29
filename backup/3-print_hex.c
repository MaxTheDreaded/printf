#include "main.h"

/**
 * print_hex_string - function that prints a hex
 * @i: number
 * @hex: base
 * @alpha: letter
 * Return: number of characters printed
 */
int print_hex_string(unsigned int i, unsigned int hex, char alpha)
{
unsigned int a = i % hex;
unsigned int b = i / hex;
char c;

if (a < 10)
c = a + '0';
else
c = a + alpha;
if (b != 0)
print_hex_string(b, hex, alpha);
_putchar(c);
return (1);
}

/**
 * print_hex - function that prints a hex
 * @args: arguments
 * Return: number of characters printed
 */
int print_hex(va_list args)
{
unsigned int i = va_arg(args, unsigned int);
unsigned int hex = 16;
char alpha = 'a' - 10;

if (i == 0)
{
_putchar('0');
return (1);
}
return (print_hex_string(i, hex, alpha));
}

/**
 * print_HEX - function that prints a hex
 * @args: arguments
 * Return: number of characters printed
 */
int print_HEX(va_list args)
{
unsigned int i = va_arg(args, unsigned int);
unsigned int hex = 16;
char alpha = 'A' - 10;

if (i == 0)
{
_putchar('0');
return (1);
}
return (print_hex_string(i, hex, alpha));
}
