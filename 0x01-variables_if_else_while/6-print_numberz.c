#include <stdio.h>

/**
 * main - The function prints numbers from 0 to 9
 * Description: The functions putchar is the only one
 * to be used
 * Return: 0 (Success)
 */

int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
