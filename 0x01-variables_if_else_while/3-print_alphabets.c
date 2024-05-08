#include <stdio.h>

/**
 * main - rints out lowercase alphabets
 * Description: The function prints from a to z in a new line
 * Return: 0 (Success)
 */

int main(void)
{
char alpha = 'a';
char upper = 'A';

while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
while (upper <= 'Z')
{
putchar(upper);
upper++;
}
putchar('\n');
return (0);
}
