#include "main.h"

/**
 * cases_di - cases d & i for _printf
 * @format: character string
 * @index: index
 * @args: arguments
 * Return: number of characters printed
 */
int cases_di(const char *format, int index, va_list args)
{
int j = 0, count = 0;
int num = va_arg(args, int);
char *str;

if (format[index] == 'd' || format[index] == 'i')
{
if (num < 0)
{
_putchar('-');
num = -num;
count++;
}
str = malloc(sizeof(char) * 10);
if (str == NULL)
return (-1);
while (num != 0)
{
str[j] = (num % 10) + '0';
num /= 10;
j++;
}
for (j--; j >= 0; j--)
{
_putchar(str[j]);
count++;
}
free(str);
}

return (count);
}
