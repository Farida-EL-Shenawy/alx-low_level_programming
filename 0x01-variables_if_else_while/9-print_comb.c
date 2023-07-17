#include<stdio.h>
/**
 * main - A program that prints all single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;
while (num <= 9)
{
putchar(num + '0');
num++;
if (num <= 9)
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
