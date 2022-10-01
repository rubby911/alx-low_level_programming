#include "main.h"

/**
*_strcpy - Copy and pastes strings
*@dest: First arguement
*@src: Another arguement
*Return: dest
*/


char *_strcpy(char *dest, char *src)
{int a = 0;
while (*(src + a) != '\0')
{
*(dest + a) = *(src + a);
a++;
}
*(dest + a) = '\0';
return (dest);
}
