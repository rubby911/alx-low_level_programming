#include "main.h"

/**
*squareroot_checker - function that  check for the square root of an interger
*@a: Takes a guess at sqrt
*@b: The number to find its  square root
* Return: -1 or squaroot  of b
*/

int squareroot_checker(int a, int b)
{
if (a * a == b)
{
return (a);
}
if (a * a  > b)
{
return (-1);
}
return (squareroot_checker(a + 1, b));
}




/**
*_sqrt_recursion - A function that returns the natural square root of a number
*@n: The interger value to find its square root
*Return: Return the natural square root or -1
*/


int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (squareroot_checker(1, n));
}
