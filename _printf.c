#include "main.h"

/**
* cases_cs - cases c, s & % for _printf
* @format: character string
* @i: index
* @args: arguments
* Return: number of characters printed
*/
int cases_cs(const char *format, int i, va_list args)
{
int j = 0, count = 0;
char *str;

switch (format[i])
{
case 'c':
_putchar(va_arg(args, int));
count++;
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
for (j = 0; str[j] != '\0'; j++)
{
_putchar(str[j]);
count++;
}
break;
case '%':
_putchar('%');
count++;
break;
default:
_putchar('%');
_putchar(format[i]);
count += 2;
break;
}

return (count);
}

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
num *= -1;
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

/**
* _printf - produces output according to a format
* @format: character string
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
int i = 0, count = 0;
va_list args;


if (format == NULL)
return (-1);
va_start(args, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
if (format[i] == 'c' || format[i] == 's' || format[i] == '%')
count += cases_cs(format, i, args);
else if (format[i] == 'd')
count += cases_di(format, i, args);
else if (format[i] == '\0')
return (-1);
}
else
{
_putchar(format[i]);
count++;
}
i++;
}
va_end(args);
return (count);
}
