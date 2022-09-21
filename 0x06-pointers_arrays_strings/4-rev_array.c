#include "main.h"
/**
 *_strcmp -compare 2 strings
 *@s1: The first string
 *@s2: The second string
 *Return: The strings
 */


int _strcmp(char *s1, char *s2)
{int a, b, c;
a = 0;
b = 0;
c = 0;
while (s1[b] != 0)
{
b++;
}
while (s2[c] != 0)
{
c++;
}
while (s1[a] != '\0' && s2[a] != '\0')
{
if (s1[a] != s2[a])
{
return (s1[a] - s2[a]);
}
a++;
}
if (b > c)
{
return (s1[b] * -1);
}
else if (b < c)
{
return (s2[b] * -1);
}
return (0);
}
