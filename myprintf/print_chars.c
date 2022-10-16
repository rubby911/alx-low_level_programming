#include "main.h"
#include <stdlib.h>

/**
 * print_char  - A function that prints a char value on the screen
 * @char_value: The char to print
 *
 * Return: At all times  1
 */
int print_char(va_list char_value)
{
	char character = (char)va_arg(char_value, int);

	_putchar(character);
	return (1);
}

/**
 * print_string - A function that prints a string
 * @string_value: The string that will be  printed
 *
 * Return: The number of chars printed
 */
int print_string(va_list string_value)
{
	int counter;
	char *str_value = va_arg(string_value, char *);

	if (str_value == NULL)
		str_value = "(null)";
	for (counter = 0; str_value[counter]; counter++)
	{
		_putchar(str_value[counter]);
	}
	return (counter);
}
