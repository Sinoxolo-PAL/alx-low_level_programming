#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
int row, column, cell;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
cell = (column * row);
if (cell <= 9)
{
printf("%i", cell);
printf(",");
printf("   ");
}
else
{
printf("%i", cell);
printf(",");
printf(" ");
}
}
printf("\n");
}
}
