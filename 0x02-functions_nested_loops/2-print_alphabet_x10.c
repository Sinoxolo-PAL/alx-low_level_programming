#include <stdio.h>
#include "main.h"

/**
 * print_alphabets_10x - Print the alphabets in lowercase
 * 10 times followed by new line
 */

void print_alphabet_x10(void)
{
int i;
char letter;

for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
}
putchar('\n');
}
