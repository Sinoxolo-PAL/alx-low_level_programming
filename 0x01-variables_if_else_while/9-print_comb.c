#include <stdio.h>

/**
 * main - prints 0, 1, 2, 3, 4 ,5 6, 7, 8, 9
 * Description: Print the sequence using only putchar function
 * Return: 0 (Success)
 *
 */

int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
