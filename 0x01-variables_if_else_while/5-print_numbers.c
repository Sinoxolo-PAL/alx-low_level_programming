#include <stdio.h>

/**
 * main - prints out base 10 numbers less than 9
 * Description: The function prints 0 to 9
 * Return: 0 (Success)
 */

int main(void)
{
int number;

for (number = 0; number <= 9; number++)
{
printf("%d", number);
}
putchar('\n');
return (0);
}
