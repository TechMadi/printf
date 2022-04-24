#include "main.h"

/**
 * print_c - Prints a character(s)
 * @arg: argument list
 *
 * Return: 1
 */

int print_c(va_list arg)
{
	char c;

	c = va_arg(arg, int);

	_putchar(c);
	return (1);
}

/**
 * print_s - Prints a string
 * @ss: String to print
 *
 * Return: Number of characters printed
 */

int print_s(char *ss)
{
	int i = 0;

	while(ss[i] != '\0')
	{
		_putchar(ss[i]);
		i++;
	}
	return (i);
}
