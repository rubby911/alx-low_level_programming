#include "main.h"

/**
**_memset - A function that fills memory with a constant byte
*@s: A character arguement
*@b: Another character arguement
*@n: An unsigned interger
*Return: Returns the filled memoty byte
*/

char *_memset(char *s, char b, unsigned int n)
{int j = 0;
while (n > 0)
{
s[j] = b;
j++;
n--;
}
return (s);
}
