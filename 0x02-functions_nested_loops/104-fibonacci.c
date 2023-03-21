#include <stdio.h>

/**
* main - Prints the first 98 Fibonacci numbers, separated by comma and space
*
* Return: Always 0.
*/
int main(void)
{
int count;
unsigned long int prev = 1;
unsigned long int curr = 2;
unsigned long int next;

printf("%lu, %lu", prev, curr);

for (count = 3; count <= 98; count++)
{
next = prev + curr;
prev = curr;
curr = next;
printf(", %lu", next);
}

printf("\n");

return (0);
}
