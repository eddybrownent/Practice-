#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point
*
* Description - prints the last number stored in the variable n
*
* Return: 0
*
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digit of %i and is greater than 5\n", n);
}
else if (n == 0)
{
printf("Last digit %i ans is 0\n", n);
}
else
{
printf("Last digit %i and is less than 6 and not 0\n", n);
}
return (0);
}
