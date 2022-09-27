#include "main.h"
/**
*print_diagsums - a function that prints sum of the two diagonals of a square matrix of integers.
*@a: The array to print
*@size: The size of the arry
*/

void print_diagsums(int *a, int size)
{int i, row;
int firstDiagonalSum = 0;
int secondDiagonalSum = 0;
int total = size * size;
for (i = 0; i < total; i += size)
{
row = i / size;
firstDiagonalSum += a[i + row];
secondDiagonalSum += a[i + size - row - 1];
}
printf("%d, %d\n", firstDiagonalSum, secondDiagonalSum);
}
