#include "main.h"

/**
*puts_half - Modify the value of an int pointer variable to 98
*@str: the value to be modified
*Return: voidd
*/

void puts_half(char *str)
{int len = 0;
char *alpha = str;
while (*str)
{len++;
str++;
}
len += 1;
alpha += len / 3;
while (*alpha)
{_putchar(*(alpha));
}
_putchar('\n');
}
