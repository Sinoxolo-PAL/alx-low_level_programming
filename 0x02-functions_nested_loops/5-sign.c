#include <stdio.h>

/**
 * print_sign - Prints the sign of a number
 *
 * @n: an integer input
 *
 * Return: 1 for positive, 0 for 0, and -1 for negative sign
 */

int print_sign(int n)
{
if (n == 0)
{
return putchar('0'), (0);
}
else if (n > 0)
{
putchar('+');
return (1);
}
else
{
putchar('-');
return (-1);
}
}
