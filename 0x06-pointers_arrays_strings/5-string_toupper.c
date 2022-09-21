#include "main.h"

/**
**string_toupper - Converst a string from lower case to upper case
*@argue: String to convert
*Return: Returns 0
*/


char *string_toupper(char *argue)
{int i;
for (i = 0; argue[i] != '\0'; i++)
{
if (argue[i] >= 'a' && argue[i] <= 'z')
{
argue[i] = argue[i] - 32;
}
}
return (argue);
}
