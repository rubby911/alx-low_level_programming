#include <stdio.h>
#include "main.h"

/**
*fibonacci- a function that that prints multiples of 3 and 9.
*
* Return: 0
*/

int fibonacci(void)
{int i, j;
i = 0;
while (i < 1024)
{
if ((i % 3) == 0 || (i % 5) == 0)
{j += i;
}
i++;
}
printf("%d\n", j);
return (0);
}
