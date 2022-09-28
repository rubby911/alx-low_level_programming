#include "main.h"

/**
*primeNumber_checker - A function that checks  if  a  number is a  prime number
*@a: Factor  to check
*@b: possible prime number
* Return: 1 if prime, 0 if not
*/

int primeNumber_checker(int a, int b)
{
if (b < 2 || b % a == 0)
{
return (0);
}
else if (a >  b / 2)
{
return (1);
}
else
{
return (primeNumber_checker(a + 1, b));
}
}

/**
* is_prime_number - Checks if a number is prime
*@n: The number to check
*Return: Return 1 if numbers is a  prime number, 0 if it is not
*/

int is_prime_number(int n)
{
if (n == 2)
{
return (1);
}
return (primeNumber_checker(2, n));
}
