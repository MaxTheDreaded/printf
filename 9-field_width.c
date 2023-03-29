#include "main.h"

/**
 * width_check - checks for field width
 * @format: format string
 * @i: index of format string
 * @width: struct of field width
 * Return: index of format string
 */
int width_check(const char *format, int i, width_t *width)
{
if (format[i] == '*')
{
width->star = 1;
i++;
}
else
{
while (format[i] >= '0' && format[i] <= '9')
{
width->num = (width->num * 10) + (format[i] - '0');
i++;
}
}
return (i);
}
