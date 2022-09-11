#include <stdio.h>

/**
* main - program that prints the numbers from 00 to 99
* Numbers must be separated by ,followed by a space
* Numbers should be printed in ascending order with 2 digits
* You can only use the putchar function
* Return: 0
*/


int main(void)
{int first;
int second;
int third;
for (first = 48; first < 58; first++)
{for (second = 49; second < 58; second++)
{for (third = 50; third < 58; third++)
if (third > second && second > first)
{putchar(first);
putchar(second);
putchar(third);
if (first != 55 || second != 56)
{putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
