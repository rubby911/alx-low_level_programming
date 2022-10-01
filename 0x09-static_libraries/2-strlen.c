#include "main.h"

/**
*_strlen - Returns the length of a given string
*@s: Place holder for the string
*Return: stringLength
*/

int _strlen(char *s)
{int stringLength = 0;
while (*s != 0)
{stringLength++;
s++;
}
return (stringLength);
}
