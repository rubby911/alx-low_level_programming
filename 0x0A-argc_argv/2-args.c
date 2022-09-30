#include "main.h"
#include <stdio.h>

/**
*main - Staring point of the programm
*@argc: The arguement count value
*@argv: A char array with the size of argc
*Return: Returns 0
*/






int main(int argc, char *argv[])
{int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
