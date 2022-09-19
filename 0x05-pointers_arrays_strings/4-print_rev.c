#include "stdio.h"
/**
*print_rev - prints a string in reverse order
*
*@s: The string to be printed in reverse order
*/
void print_rev(char *s)
{int count = 0;
for (; *s; )
{
count++;
s++;
}
for (; count; count--)
{
s--;
_putchar(*s);
}
_putchar('\n');
}
