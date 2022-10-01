#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
*main - generates random valid passwords for the program 101-crackme.
*
*Return: void
*/


int main(void)
{int abj, abn, abi;
char ab[100];
abn = 0;
abi = 0;
srand(time(NULL));
while (abn < 2645)
{
abj = rand() % 122;
if (abj > 32)
{ab[abi++] = abj;
abn += abj;
}
}
ab[abi++] = (2772 - abn);
ab[abi] = '\0';
printf("%s", ab);
return (0);
}

