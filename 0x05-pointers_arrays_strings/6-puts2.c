#include <stdio.h>
#include "main.h"

/**
*puts2 - Prints evey second value in an arryr
*@str: Among the values to be printed
*
*Return: void
*/

void puts2(char *str)
{
while (*str)
{
_putchar(*str);
str++;
if (*str)
{str++;
}
}
_putchar('\n');
}
