#include "main.h"

/**
**_memset - A function that fills memory with a constant byte.
*@s: - A character arguement
*@b:  Another character arguement
*@n: An unsigned interger
*Return: return the changed array
*/

char *_memset(char *s, char b, unsigned int n)
{unsigned int j;
for (j = 0; j < n; j++)
{
s[j] = b;
return (s);
}
}
