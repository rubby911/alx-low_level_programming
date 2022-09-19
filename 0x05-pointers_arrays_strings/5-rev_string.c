#include "main.h"

/**
*rev_string - A function that reverse a string
*@s: The string to be reversed;
*Return: void
*/

void rev_string(char *s)
{int first = 0;
int second;
char string[0];
while (s[first] != '\0')
{
first++;
for (second = 0; second < first; second++)
{
first--;
string[second] = s[first];
s[first] = string;
}
}
}
