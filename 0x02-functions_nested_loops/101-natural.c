#include <stdio.h>
#include <stdlib.h>

/**
*mymain - function that finds and print multiple numbers from 0 - 1024
*
*
* Return: nothing
*/
int mymain(void)
{int a, b;
b = 0;
for (a = 0; a < 1024; a++)
{
if (a % 3 == 0 || a % 5 ==  0)
{
b += a;
}
printf("%d\n", b);
}
return (0);
}
