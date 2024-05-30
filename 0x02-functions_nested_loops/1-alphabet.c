#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowecase
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
