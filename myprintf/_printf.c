#include "main.h"
#include <stdlib.h>

/**
 *format_checker - A function that checks if a given value is in a valid format
 * @format_value:The  format specifier
 *
 * Return: Return a pointer to a valid function or NULL
 */
static int (*format_checker(const char *format_value))(va_list)
{
	unsigned int a;
	print_t p[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_i},
		{"d", print_d},
		{NULL, NULL}
	};

	for (a = 0; p[a].t != NULL; a++)
	{
		if (*(p[a].t) == *format_value)
		{
			break;
		}
	}
	return (p[a].f);
}

/**
 * _printf - A function that prints strings on the screen
 * @format: A list of argument and  types that will be  passed to the function
 *
 * Return: The number of characters that was  printed
 */
int _printf(const char *format, ...)
{
	unsigned int a = 0, counter = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[a])
	{
		for (; format[a] != '%' && format[a]; a++)
		{
			_putchar(format[a]);
			counter++;
		}
		if (!format[a])
			return (counter);
		f = format_checker(&format[a + 1]);
		if (f != NULL)
		{
			counter += f(valist);
			a += 2;
			continue;
		}
		if (!format[a + 1])
			return (-1);
		_putchar(format[a]);
		counter++;
		if (format[a + 1] == '%')
			a += 2;
		else
			a++;
	}
	va_end(valist);
	return (counter);
}
