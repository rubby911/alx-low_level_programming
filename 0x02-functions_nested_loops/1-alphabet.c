#include <stdio.h>
#include "main.h"
/**
*print_alphabet -prints alphabets a-z
*
*Return: Always 0.
*/
void print_alphabet(void)
{char a = 'a';
for (; a <= 'z'; a++)
{_putchar(a);
}
_putchar('\n');
}
