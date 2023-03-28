#include "main.h"

/**
 * print_octal - function that prints a number in octal
 * @args: arguments
 * Return: number of characters printed
 */
int print_octal(va_list args)
{
int count = 0, j;
int *array;
unsigned int i = va_arg(args, unsigned int);
unsigned int octal = 8;
unsigned int a = i;
char c;

while (i / octal != 0)
{
i = i / octal;
count++;
}
count++;
array = malloc(sizeof(int) * count);
for (j = 0; j < count; j++)
{
array[j] = a % octal;
a = a / octal;
}
for (j = count - 1; j >= 0; j--)
{
c = array[j] + '0';
_putchar(c);
}
free(array);
return (count);
}
