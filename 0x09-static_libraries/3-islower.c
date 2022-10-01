#include "main.h"

/**
*_islower - Checlks if a given letter is lower
*@c: The letter that will be checked
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
