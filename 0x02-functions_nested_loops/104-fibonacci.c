#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers
*
* Return: Always 0
*/
int main(void)
{
unsigned long int n1 = 1, n2 = 2, n3;
int i;

printf("%lu, %lu", n1, n2);

for (i = 0; i < 96; i++)
{
n3 = n1 + n2;
printf(", %lu", n3);
n1 = n2;
n2 = n3;
}

printf("\n");
return (0);
}
