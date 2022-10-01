#include "main.h"

/**
*puts_half - Modify the value of an int pointer variable to 98
*@str: the value to be modified
*Return: voidd
*/

void puts_half(char *str)
{int a = 0, b = 0, c;
while (str[a++])
{
b++;
}
if ((b % 2) == 0)
{
c = b / 2;
}
else
{
c = (b + 1) / 2;
}
for (a = c; a < b; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
