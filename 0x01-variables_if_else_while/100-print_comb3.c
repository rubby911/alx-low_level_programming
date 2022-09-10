#include <stdio.h>

/**
* main - Prints combination of numbers
*
* Return: Always (Success)
*/
int main(void)
{int first = '0';
int second = '9';
for (; first <= '9'; first++)
{for (; second <= '9'; second++)
{if (first < second)
{putchar(first);
putchar(second);
}if (first != '8' || (first == '8' && second != '9'))
{putchar(',');
putchar(' ');
}putchar('\n');
}
}
return (0);
}
