#include "main.h"
/**
* _isdigit- checking if it's a digit 0-9
* @c: The arguement we are checking
*
* Return: 1 if it's a digit, 0 otherwise
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
