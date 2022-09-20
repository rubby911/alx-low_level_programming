#include "main.h"

/**
*_atoi - A function that converst a string to an interger
*@s: the string to be converted
*Return:int
*/

int _atoi(char *s)
{int abi = 0;
int abd = 0;
int abn = 0;
int length = 0;
int values = 0;
int abf = 0;
while (s[length] != '\0')
{
length++;
}
while (abi < length && abf == 0)
{
if (s[abi] == '-')
{
values = s[abi] - '0';
if (abd % 2)
{
values = -values;
}
abn = abn * 10 + values;
abf = 1;
if (s[abi + 1] < '0' || s[abi + 1] > '9')
{
break;
}
abf = 0;
}
abi++;
}
if (abf == 0)
{
return (0);
}
}

