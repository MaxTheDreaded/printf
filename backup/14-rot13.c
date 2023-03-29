#include "main.h"

/**
 * print_R - function that prints a string in rot13
 * @args: arguments
 * Return: number of characters printed
 */

int print_R(va_list args)
{
	int i = 0, j;
	char *s = va_arg(args, char *);
	char *s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *s2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		j = 0;
		while (s1[j] != '\0')
		{
			if (s[i] == s1[j])
			{
				_putchar(s2[j]);
				break;
			}
			j++;
		}
		i++;
	}
	return (i);
}

