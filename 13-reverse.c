#include "main.h"

/**
 * print_r - function that prints a string in reverse
 * @args: arguments
 * Return: number of characters printed
 */
int print_r(va_list args)
{
int i = 0;
char *s = va_arg(args, char *);

if (s == NULL)
s = "(null)";
while (s[i] != '\0')
i++;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
return (i);
}
