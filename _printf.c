#include "main.h"

/**
 * _printf - Emulates printf
 * @format: Datatype to print
 *
 * Returns: Number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	va_list arg;

	va_start(arg, format);

	while (format[i] != '\0')
	{
		if(format[i] != '%')
		{
			_putchar(format[i]);
			j++;
		}

		if(format[i] == '%')
		{
			if (format[i + 1] == 'c')
				j += print_c(arg);
			else if (format[i + 1] == 's')
				j += print_s(va_arg(arg, char *));
			else if (format[i + 1] == '%')
				j += _putchar('%');
			else if (format[i + 1] == 'd' || format[i] == 'i')
				j += print_d(va_arg(arg, int));
			else if (format[i + 1] == 'b')
				j += print_b(va_arg(arg, int));
			else
			{
				_putchar(format[i]);
				j++;
				_putchar(format[i + 1]);
			}
			i++;
		}
		i++;
	}

	va_end(arg);
	return (j);
}
