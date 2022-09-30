#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - Staring point of the programm
*@argc: The arguement count value
*@argv: A char array with the size of argc
*Return: Returns 0
*/






int main(int argc, char *argv[])
{int i = 0, j = 0;
if (argc >= 2)
{
i = atoi(argv[1]);
j = atoi(argv[2]);
printf("%d\n", i * j);
}
else
{
printf("Error\n");
return (i);
}
return (0);
}
