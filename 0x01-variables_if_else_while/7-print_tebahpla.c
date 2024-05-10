#include <stdio.h>

/**
 * main - print alphabets from z to a
 * Description: Reverses the alphabets
 * Return: 0 (Success)
 *
 */

int main(void)
{
char alpha;

for (alpha = 'z'; alpha >= 'a'; alpha--)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
