#include "main.h"

/**
*_strlen_recursion - A function that finds the length of a given string.
*@s: The string to find lenght
*Return: Returns the length of the given string
*/

int _strlen_recursion(char *s)
{int a;
a = 0;
if (*s != 0)
{
a++;
return (a + _strlen_recursion(s + a));
}
return (a);
}
