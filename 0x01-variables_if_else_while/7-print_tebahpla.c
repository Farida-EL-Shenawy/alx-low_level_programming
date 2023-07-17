#include<stdio.h>
/**
 * main - A program that prints alphapet using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char  ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
