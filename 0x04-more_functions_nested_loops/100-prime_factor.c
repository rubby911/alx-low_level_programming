#include <stdio.h>
#include <math.h>


/**
*main - Finds and print the prime factors of 612852475143
*
* Return: 0
*/



int main(void)
{large_number = 612852475143;
int a;
int b = -1;
int c;
while (large_number % 2 == 0)
{
b = 2;
large_number = large_number / 2;
}
for (a = 3; a <=  sqrt(612852475143); a = a + 2)
{
while (large_number %  a == 0)
{
b = a;
large_number = large_number / 1;
}
}
if (large_number > 2)
{
b = large_number;
}
printf("%d", b)
return (0);
}
