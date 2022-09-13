#include "main.h"

/**
*print_last_digit -  prints the last digit  of an interger number.
*@a: The interger  size to be checked
*Return: eiter 0 or 1
*/

int print_last_digit(int a)
{int last_digit;
last_digit = a % 10;
return (last_digit);
}
