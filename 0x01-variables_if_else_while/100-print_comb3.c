#include<stdio.h>
/**
 * main - A program that prints two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1 = 0;
while (num1 <= 9)
{
int num2 = 0;
while (num2 <= 9)
{
if (num1 != num2 && num1 < num2)
{
putchar(num1 + '0');
putchar(num2 + '0');
if (num1 + num2 != 17)
{
putchar(',');
putchar(' ');
}
}
num2++;
}
num1++;
}
putchar('\n');
return (0);
}
