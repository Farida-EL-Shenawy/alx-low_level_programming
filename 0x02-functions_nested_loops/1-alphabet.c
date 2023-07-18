#include"main.h"
/**
 * print_alphabet - A program for printing lowercase alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
