#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/

int main(void)
{
int n;
int m;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes here */
m = n % 10;
if (m > 5)
printf("Last digit of %d is %d and is greater than 5", n, m);
else if (m == 0)
printf("Last digit of %d is %d and is 0", n, m);
else if (m < 6 && m != 0)
printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
printf("\n");
return (0);
}
