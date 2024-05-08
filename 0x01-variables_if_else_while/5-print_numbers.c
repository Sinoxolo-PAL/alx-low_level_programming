#include <stdio.h>

/**
 * main - prints out base 10 numbers less than 9
 * Description: The function prints 0 to 9
 * Return: 0 (Success)
 */

int main(void)
{
int number = 0;

while (number <= 9)
{
putchar(number);
number++;
}
putchar('\n');
return (0);
}
