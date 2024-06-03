#include "main.h"
#include <stdio.h>
/**
 * print_last_digit -  prints the last digit of a number.
 *
 * @n: integer to be computed.
 *
 * Return: Value of the last digit
 */

int print_last_digit(int n)
{
int last_digit = n % 10;

if (last_digit < 0)
{
last_digit *= -1;
}
putchar(last_digit);
return (last_digit);
}
