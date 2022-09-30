#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
*main - Staring point of the programm
*@argc: The arguement count value
*@argv: A char array with the size of argc
*Return: Returns 0
*/






int main(int argc, char *argv[])
{unsigned int i, digit, result;
result = 0;
if (argc < 3)
{
printf("%d\n", 0);
return (0);
}
while (argc-- && argc > 0)
{
for (i = 0; argv[argc][i] != '\0'; i++)
{
if (!(isdigit(argv[argc][i])))
{
printf("Error\n");
return (1);
}
}
digit = atoi(argv[argc]);
result = result + digit;
}
printf("%d\n", result);
return (result);
}
