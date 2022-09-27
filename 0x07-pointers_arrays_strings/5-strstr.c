#include "main.h"

/**
**_strstr - a function that locates a substring.
*@haystack: Arguement to locate a substring
*@needle: The substring to loacet
*Return: Retun the pointer to the beginning ot Null
*/


char *_strstr(char *haystack, char *needle)
{char *x = haystack;
char *y = needle;
while (*x)
{
y = needle;
x = haystack;
while (*y)
{
if (*x == *y)
{
y++;
x++;
}
else
break;
}
if (*y == '\0')
return (haystack);
haystack++;
}
return (0);
}
