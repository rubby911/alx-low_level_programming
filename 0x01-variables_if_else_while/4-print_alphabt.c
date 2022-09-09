#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{char abc = 'a';
for (; abc <= 'z'; abc++)
{if (abc != 'e' && abc != 'q')
{putchar(abc);
}
}
putchar('\n');
return (0);
}
