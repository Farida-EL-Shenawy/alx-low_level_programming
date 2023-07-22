#include"main.h"

/**
 * print_square - a function that draws a square
 *
 * @size: input
 *
 * Return: void
 */

void print_square(int size)
{

int i;
int j;

if (size <= 0)
_putchar('\n');
for (i = 0; i < size; i++)
{
for (j = 0; j < (size); j++)
{
_putchar('#');
}
putchar('\n');
}
}
