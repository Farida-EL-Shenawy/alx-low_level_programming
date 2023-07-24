#include"main.h"

/**
 * _puts -  a function that prints a string
 *
 * @str: pointer
 *
 * Return: void
 */

void _puts(char *str)
{

int count;

for (count = 0; *str != '\0'; str++)
_putchar(*str + '0');
_putchar('\n');
}
