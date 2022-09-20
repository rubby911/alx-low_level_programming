#include "main.h"

/**
*_atoi - A function that converst a string to an interger
*@s: the string to be converted
*Return:int
*/

int _atoi(char *s)
{int abi, abj, abn, abx;
abi = abn = 0;
while ((s[abi] < '0' || s[abi] > '9') && (s[abi] != '\0'))
{
if (s[abi] == '-')
{
abx *= -1;
}
abi++;
}
abj = abi;
while ((s[abj] >= '0') && (s[abj] <= '9'))
{
abn = (abn * 10) + abx * ((s[abj]) - '0');
abj++;
}
return (abn);
}
