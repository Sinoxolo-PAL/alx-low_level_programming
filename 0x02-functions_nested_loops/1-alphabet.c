#include <stdio.h>
#include "main.h"

/**
 * main - prints the alphabets in lowecase
 * Description: returns 0 once all has been printed
 * Return: 0 (Success)
 * 
 */

void print_alphabet(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
}
