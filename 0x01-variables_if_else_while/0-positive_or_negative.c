#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* 
 * main - A program that determines if the random number is positive or negative
 * Return: 0 (Success) */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("is zero");
}
else if ( n > 0)
{
printf("is positive");
}
else
{
printf("negative");
}
return (0);
}
