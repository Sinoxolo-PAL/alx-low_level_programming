#include <stdio.h>

/**
 * main - Prints hexa decimals
 * Description: Prints all numbers of base 16
 * Return: 0 (Success)
 *
 */

int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
