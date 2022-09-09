#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{char abc = 'a';
char capital = 'A';
for (; abc <= 'z'; abc++)
{putchar(abc);
}
for (; capital <= 'Z'; capital++)
{putchar(capital);
}
putchar('\n');
return (0);
}
