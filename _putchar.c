#include <unistd.h>

/**
 * _putchar - writes a character to standard ouptu
 * @c: input character
 *
 * Return: 1(Success) and -1(error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
