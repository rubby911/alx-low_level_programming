#include "main.h"

/**
*rot13 - a function that encodes a string using rot13.
*@strs: strings to encode
*Return: Retuns encoded strings
*/

char *rot13(char *values)
{char encoder1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char encoder2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;
for (i = 0; values[i] != '\0'; i++)
{
for (j =0; encoder[j] != '\0'; j++)
{
if (values[i] == encoder1[j])
{
values[i] = encoder2[j];
break;
}
}
}
return (values);
}
