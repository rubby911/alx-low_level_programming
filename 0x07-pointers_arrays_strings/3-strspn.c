#include "main.h"

/**
*_strspn -  A function that gets the length of a prefix substring
*@s: The string arguement
*@accept: The arguemnt to find byte
*Return: Return 0
*/

unsigned int _strspn(char *s, char *accept)
{int  i, a;
unsigned int  j = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (a = 0; accept[a] != '\0' && accept[a] != s[i];  a++)
{
if (s[i] == accept[a])
{
j++;
}
if (accept[a] == '\0')
{
return (j);
}
}
return (j);
}
}
