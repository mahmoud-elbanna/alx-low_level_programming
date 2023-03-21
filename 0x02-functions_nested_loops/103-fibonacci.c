#include <stdio.h>
/**
* main - Prints the sum of the even-valued terms in the Fibonacci sequence
*
* Return: Always 0.
*/
int main(void)
{
int term1 = 1;
int term2 = 2;
int next_term = 0;
int sum = 0;
while (term2 <= 4000000)
{
if (term2 % 2 == 0)
{
sum += term2;
}
next_term = term1 + term2;
term1 = term2;
term2 = next_term;
}
printf("%d\n", sum);
return (0);
}
