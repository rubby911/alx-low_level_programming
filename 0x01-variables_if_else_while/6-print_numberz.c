#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{int lowest = 0;
for (; lowest < 10; lowest++)
{putchar((lowest % 10) + '0');
}
putchar('\n');
return (0);
}
