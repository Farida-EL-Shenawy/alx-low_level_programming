#include"main.h"

/**
 * print_line - a function that draws a straight line
 *
 * @n: input
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{

int i;
int s;

if (n <= 0)
_putchar('\n');
else
{
for (i = 1; i <= n; i++)
{
for (s = 1; s <= i; s++) 
_putchar(' ');
_putchar('\');
_putchar('\n');
}
}
}
