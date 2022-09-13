#include "main.h"

/**
*_isalpha - Checlks if a given letter is lower or upper case
*@c: The letter that will be checked
*Return: eiter 0 or 1
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
