#include "main.h"

/**
*puts_half - Modify the value of an int pointer variable to 98
*@str: the value to be modified
*Return: voidd
*/

void puts_half(char *str)
{int len;
int i, j;
j = 0;
for (len = 0; str[len] != '\0'; len++)
{j++;
i = (j / 2);
if ((j % 2) == 1);
{
len = ((j + 1) / 2);
}
}
for (len = i; str[len] != '\0'; len++)
{
_putchar(str[len]);
}
_putchar('\n');
}

