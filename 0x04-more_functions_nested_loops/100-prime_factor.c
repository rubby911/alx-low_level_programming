#include <stdio.h>
#include <math.h>


/**
*main - Finds and print the prime factors of 612852475143
*
* Return: 0
*/


int main(void)
{long int given_number = 612852475143;
int i;
int min = -1;
while (given_number % 2 == 0)
{
min = 2;
given_number = given_number / 2;
}
for (i = 3; i <= sqrt(612852475143); i = i + 2)
{
while (given_number % i == 0)
{
min = i;
given_number = given_number / i;
}
}
if (given_number > 2)
{
min = given_number;
}
printf("%d\n", min);
return (0);
}
