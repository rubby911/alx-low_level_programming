#include <stdio.h>
#include "main.h"
/**
*print_rev - prints a string in reverse order
*
*@s: The string to be printed in reverse order
*/
void print_rev(char *s)
{int count = 0;
int abn;
while (s[abn++])
{
count++;
}
for (abn = count - 1; abn >= 0; abn--)
{
_putchar(s[abn]);
}
_putchar('\n');
}
