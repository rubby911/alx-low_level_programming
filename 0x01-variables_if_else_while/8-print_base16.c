#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Succes)
*/
int main(void)
{char first = '0';
char letter2 = 'a';
for (; first < '9'; first++)
{putchar(first);
for (; letter2 <= 'f'; letter2++)
{putchar(letter2);
}
}
putchar('\n');
return (0);
}
