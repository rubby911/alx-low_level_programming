#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A function that sums all of  its parameters.
 * @n: The  number of parameters
 * Return: Returns the sum of all the  parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sums = 0;
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
		sums += va_arg(valist, int);
	va_end(valist);
	return (sums);
}
