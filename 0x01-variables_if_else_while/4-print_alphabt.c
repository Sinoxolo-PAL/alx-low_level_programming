#include <stdio.h>

/**
 * main - rints out lowercase alphabets
 * Description: The function prints from a to z in a new line
 * Return: 0 (Success)
 */

int main(void)
{
char alpha = 'a';

while (alpha <= 'z' && alpha != 'q' && alpha != 'e')
{
if (alpha != 'e' && alpha != 'q')
{
putchar(alpha);
alpha++;
}
}
putchar('\n');
return (0);
}