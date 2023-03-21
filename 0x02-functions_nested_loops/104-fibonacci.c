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

/*Calculate the sum of even-valued terms in the sequence*/
unsigned long int sum = 0;
prev = 1;
curr = 2;

while (curr <= 4000000)
{
if (curr % 2 == 0)
{
sum += curr;
}

next = prev + curr;
prev = curr;
curr = next;
}

printf("Sum of even-valued terms: %lu\n", sum);

return (0);
}
