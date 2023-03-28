#include "main.h"

/**
 * print_S - function that prints a string
 * @args: arguments
 * Return: number of characters printed
 */
int print_S(va_list args)
{
int i = 0;
char *s = va_arg(args, char *);

if (s == NULL)
s = "(null)";
while (s[i] != '\0')
{
if (s[i] < 32 || s[i] >= 127)
{
_putchar('\\');
_putchar('x');
_putchar(s[i] / 16 + '0');
_putchar(s[i] % 16 + '0');
i += 4;
}
else
{
_putchar(s[i]);
i++;
}
}
return (i);
}
