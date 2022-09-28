#include "main.h"

/**
*_pow_recursion - Function that finds the value of x to the power of y
*@x: The number to be multiplied
*@y: The power to multiply it to
*Return: Return the value of x to the power of y
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
return (x * _pow_recursion(x, y - 1));
}

