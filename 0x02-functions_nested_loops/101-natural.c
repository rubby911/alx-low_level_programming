#include <stdio.h>
#include <stdlib.h>

/**
*main - function that finds and print multiple numbers from 0 - 1024
*
*
* Return: nothing
*/
int main(void)
{int a, b;
a = 0;
while (a < 1024)
{if ((a % 3) == 0 || (a % 5) == 0)
{b += a;
}
b++;
}
printf("%d\n", b);
return (0);
}
