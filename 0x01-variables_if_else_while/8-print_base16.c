#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Succes)
*/
int main(void)
{char first = '0';
char letter2 = 'a';
for (; letter2 <= 'f'; letter2++)
{
for (; first <= '9'; first++)
{putchar(first);
} putchar(letter2);
} putchar('\n');
return (0);
}
