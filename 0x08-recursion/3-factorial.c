#include "main.h"

/**
*factorial - A function that finds the factorial of an n interger
*@n: Number to find the factorial of
* Return: Return the  the factorial value
*/


int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else if (n > 1)
{
return (n * factorial(n - 1));
}
else
{
return (n);
}
}

