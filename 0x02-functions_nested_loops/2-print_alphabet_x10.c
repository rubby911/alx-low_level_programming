#include "main.h"
/**
*print_alphabet_x10 -Prints a-z 10 times
*
*
*Return: 0
*/

void print_alphabet_x10(void)
{int a;
int b;
a = 0;
while (a <= 10)
{
b = 'a';
while (b <= 'z')
{
_putchar(b);
b++;
}
_putchar('\n');
a++;
}
}
