#include <stdio.h>
#include "main.h"
/**
*print_rev - prints a string in reverse order
*
*@s: The string to be printed in reverse order
*/
void print_rev(char *s)
{int count = 0;
while (*(s + 1))
{count++;
_putchar(*(s + count));
count--;
}
_putchar('\n');
}
