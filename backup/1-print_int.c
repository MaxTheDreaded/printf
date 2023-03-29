#include "main.h"

/**
* print_int - function that prints an integer
* @args: arguments
* Return: number of characters printed
*/
int print_int(va_list args)
{
int count = 0;
int n = va_arg(args, int);
int a = 1;

if (n < 0)
{
_putchar('-');
n = n * -1;
count++;
}
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
