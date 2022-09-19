#include <stdio.h>
#include "main.h"

/**
*swap_int - Swaps the value of one interger variable to the other
*@a: Among the values to be swab
*@b: Still another value
*return: void
*/

void swap_int(int *a, int *b)
{int swapper;
swapper = *a;
*a = *b;
*b = swapper;
return (0);
}


