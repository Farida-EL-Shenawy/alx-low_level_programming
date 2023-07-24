#include"main.h"

/**
 * print_rev - function prints a string, in reverse.
 *
 * @s: pointer
 *
 * Return: void
 */

void print_rev(char *s)
{

for (*s = '\0'; *s >= 0; s--)
_putchar(*s + 0);
_putchar('\n');
}
