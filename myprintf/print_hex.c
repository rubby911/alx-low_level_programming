#include "main.h"

/**
 * print_hexa - A function that prints  an unsigned integer in a hexidecimal form
 * @num_value: unsigned int to print
 * @char_value: flag to determine case of printing (0 = lower, 1 = upper)
 *
 * Return:The  number of digits printed
 */
int print_hexa(unsigned int num_value, unsigned int char_value)
{
	unsigned int i[8];
	unsigned int j, k, adder;
	char compare;
	int counter;

	k = 268435456;
	if (char_value)
		compare = 'A' - ':';
	else
	        compare = 'a' - ':';
	i[0] = num_value / k;
	for (j = 1; j < 8; j++)
	{
		k /= 16;
		i[j] = (num_value / k) % 16;
	}
	for (j = 0, adder = 0, counter = 0; j < 8; j++)
	{
		adder += i[j];
		if (adder || j == 7)
		{
			if (i[j] < 10)
				_putchar('0' + i[j]);
			else
				_putchar('0' + compare + i[j]);
			counter++;
		}
	}
	return (counter);
}
/**
 * print_x - takes an unsigned int and prints it in lowercase hex notation
 * @x: unsigned int to print
 *
 * Return: number of digits printed
 */
int print_x(va_list x)
{
	return (print_hexa(va_arg(x, unsigned int), 0));
}

/**
 * print_X - takes am unsigned int and prints it in uppercase hex notation
 * @X: unsigned int to print
 *
 * Return: number of digits printed
 */
int print_X(va_list X)
{
	return (print_hexa(va_arg(X, unsigned int), 1));
}

/**
 * _pow - calculates an exponent
 * @base: base of exponent
 * @exponent: exponent of number
 *
 * Return: base ^ exponent
 */
static unsigned long _pow(unsigned int base, unsigned int exponent)
{
	unsigned int i;
	unsigned long ans = base;

	for (i = 1; i < exponent; i++)
	{
		ans *= base;
	}
	return (ans);
}

/**
 * print_p - prints an address
 * @p: address to print
 *
 * Return: number of characters to print
 */
int print_p(va_list p)
{
	int count = 0;
	unsigned int a[16];
	unsigned int i, sum;
	unsigned long n, m;
	char *str = "(nil)";

	n = va_arg(p, unsigned long);
	if (n == 0)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
			count++;
		}
		return (count);
	}
	_putchar('0');
	_putchar('x');
	count = 2;
	m = _pow(16, 15); /* 16 ^ 15 */
	a[0] = n / m;
	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);
			count++;
		}
	}
	return (count);
}
