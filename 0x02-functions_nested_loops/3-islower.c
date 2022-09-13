#include "main.h"

/**
* _isalpha - Checlks if a given letter is lower
*c - letter to check
*Return: eiter 0 or 1
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
