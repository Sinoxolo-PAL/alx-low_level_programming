#include <stdio.h>
#include "main.h"

/**
 * main - prints the alphabets in lowecase
 * Return: 0 (Success)
 * Description: A function that prints all lowercase alphabets
 * returns 0 once all has been printed
 *
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
