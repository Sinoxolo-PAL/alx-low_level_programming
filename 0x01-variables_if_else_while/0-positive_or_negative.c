#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that determines if the random number
 * is positive or negative
 * Return: 0 (Success)
 * Description: Prints out the sign of the integer
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("%i is zero\n", n);
}
else if (n > 0)
{
printf("%i is positive\n", n);
}
else
{
printf("%i is negative\n", n);
}
return (0);
}
