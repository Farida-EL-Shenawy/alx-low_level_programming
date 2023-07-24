#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: pointer
 *
 * Return: void
 */

void puts_half(char *str)
{

int i;
int l;
int n;

for (l = 0; str[l] != '\0'; l++)
;
if (l % 2 == 0)
{
for (i = l / 2; i <= l; i++)
{
_putchar(str[i]);
}
}
else
{
n = (l - 1) / 2;
_putchar(n + 0);
}
_putchar('\n');
}
