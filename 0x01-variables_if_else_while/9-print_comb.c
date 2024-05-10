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
i = 0;

for (i = char(i); i < 10; i++)
{
putchar(i + ' ' + ',');
}
putchar('\n');
return (0);
}
