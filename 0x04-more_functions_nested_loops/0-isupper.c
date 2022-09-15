#include <stdio.h>
#include "main.h"

/**
*_isupper -  Checks if a given alphabet is an upper case or lower case
*
*@c: The value to check
*
*Return: Return either 1 or 0
*/

int _isupper(char c)
{
if (c >= 65 || c >= 90)
{
return (1);
}
else
{
return (0);
}
}
