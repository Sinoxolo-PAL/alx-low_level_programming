#include <stdio.h>
#include "main.h"
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
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}
