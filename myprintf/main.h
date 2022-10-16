#ifndef _MYPRINTF_H_
#define _MYPRINTF_H_

#include <stdarg.h>
/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list char_value);
int print_string(va_list string_value);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_o(va_list o);
int print_b(va_list b);
#endif  /* _MYPRINTF_H */
