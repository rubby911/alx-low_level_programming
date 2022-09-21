#include "main.h"

/**
**_strncpy - copies strings
*@dest: A place holder
*@src: Another place holder
*@n: Value to copy
*Return: copied value
*/



char *_strncpy(char *dest, char *src, int n)
{int i = 0;
int j = 0;
for (; i < n && src[i] != '\0'; i++)
{i++;
}
for (; j < i && src[j] != '\0'; j++)
{
dest[j] = src[j];
}
for (; j < n; j++)
{
dest[j] = '\0';
}
return (dest);
}
