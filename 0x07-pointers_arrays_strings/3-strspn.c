#include "main.h"

/**
*_strspn -  A function that gets the length of a prefix substring
*@s: The string arguement
*@accept: The arguemnt to find byte
*Return: Return 0
*/

unsigned int _strspn(char *s, char *accept)
{int a, b;
unsigned int c;
for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; accept[b] != '\0' && accept[b] != '\0';  b++)
{
if (s[a] == accept[b])
{
c++;
}
if (accept[b] == '\0')
{
return (c);
}
}
}
return (c);
}

