#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point
*
* Description - checks whether a numu is positive or negative
*
* Return: 0
*
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i is Positive\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
/* your code goes there */
return (0);
}
