#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
for (int row = 0; row <= 9; row++)
{
for (int column = 0; column <= 9; column++)
{
_putchar((row * column));
}
}
}
