#include "main.h"

/**
*rev_string - A function that reverse a string
*@s: The string to be reversed;
*Return: void
*/

void rev_string(char *s)
{int first = 0;
int second = 0;
int last;
while (s[second++])
{
first++;
for (second = first -1; second >= first / 2; second--)
{
last = s[second];
s[second] = s[first - second -1];
s[first - second -1] = last;
}
}
}
