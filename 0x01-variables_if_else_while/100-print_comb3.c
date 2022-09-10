
#include <stdio.h>

/**
* main - Prints combination of numbers
*
* Return: Always (Success)
*/

int main(void)
{int n1;
int m1;
for (n1 = 48; n1 <= 56; n1++)
{for (m1 = 49; m1 <= 57; m1++)
{
if (m1 > n1)
{putchar(n1);
putchar(m1);
if (n1 != 56 || m1 != 57)
{putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
