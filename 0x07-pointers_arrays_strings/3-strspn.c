#include "main.h"

/**
*_strspn -  A function that gets the length of a prefix substring
*@s: The string arguement
*@accept: The arguemnt to find byte
*Return: Return 0
*/

unsigned int _strspn(char *s, char *accept)
{int  i, a;
for (i = 0; s[i] != '\0'; i++)
{
for (a = 0; accept[a] != '\0';  a++)
{
if (s[i] == accept[a])
{
break;
}
if (accept[a] == '\0')
{
break;
}
}
if (accept[i] == '\0')
{
break;
}
}
return (i);
}
return (j);
}
}
