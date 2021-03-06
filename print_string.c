#include "main.h"

/**
 * print_string - prints a string to stdout
 * @str: string to be printed
 * Return: no. of characters printed on success, or 0 on failure
 */
int print_string(char *str)
{
	int chars_printed = 0;

	if (str == (char *)0)
		return (print_string("(null)"));
	while (str && str[chars_printed])
	{
		_putchar(str[chars_printed]);
		chars_printed++;
	}
	return (chars_printed);
}

