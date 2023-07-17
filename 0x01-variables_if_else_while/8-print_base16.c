#include<stdio.h>
/**
 * main - A program that prints hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int hex = 48;
while (hex <= 102)
{
putchar(hex);
if (hex == 57)
hex += 39;
hex++;
}
putchar('\n');
return (0);
}
