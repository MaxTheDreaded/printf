#include "main.h"

/**
 * print_int - function that prints an integer
 * @args: arguments
 * Return: number of characters printed
 */
int print_int(va_list args)
{
    int i = 0, j = 0, count = 0, n = 0, m = 0;
    int num = va_arg(args, int);
    int num2 = num;

    if (num < 0)
    {
        _putchar('-');
        count++;
        num = num * -1;
        num2 = num;
    }
    while (num2 > 0)
    {
        num2 = num2 / 10;
        i++;
    }
    for (j = 1; j < i; j++)
        m = m * 10 + 9;
    for (j = 0; j < i; j++)
    {
        n = num / m;
        _putchar(n + '0');
        num = num % m;
        m = m / 10;
        count++;
    }
    if (i == 0)
    {
        _putchar('0');
        count++;
    }
    return (count);
}