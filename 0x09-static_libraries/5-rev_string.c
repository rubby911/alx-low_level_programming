#include "main.h"

/**
*rev_string - A function that reverse a string
*@s: The string to be reversed;
*Return: void
*/

void rev_string(char *s)
{char *first = s;
char aplha;
for (; *(s + 1); )
{
s++;
}
while (first < s)
{aplha = *first;
*first = *s;
*s = aplha;
s--;
first++;
}
}
