#include "main.h"

/**
*rev_string - A function that reverse a string
*@s: The string to be reversed;
*Return: void
*/

void rev_string(char *s)
{int first, second;
char string[20];
while (*(s + first))
{*(string + first) = *(s + first);
first++;
}
first = first - 1;
while (first >= 0)
{*(s + first) = *(string + second);
second++;
first--;
}
}
