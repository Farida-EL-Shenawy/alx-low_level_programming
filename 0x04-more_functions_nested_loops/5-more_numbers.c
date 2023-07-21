#include"main.h"

/**
 * more_numbers -  functionp prints 10 times the numbers 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{

int i;
int j;
int x;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 14; j++)
{
x = j;
if (c > 9)
{
_putchar(1 + '0');
x = j % 10;
}
_putchar(x + '0');
}
_putchar('\n');
}
}
