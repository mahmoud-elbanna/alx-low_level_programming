#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
int number;
number = 0;
while (number < 10)
{
putchar(number + '0');
number++;
}
putchar('\n');
return (0);
}
