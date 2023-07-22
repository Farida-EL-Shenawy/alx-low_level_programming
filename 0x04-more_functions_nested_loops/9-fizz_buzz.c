#include<stdio.h>
#include "main.h"

/**
 * main - 1 - 100, Fizz multiples of 3,Buzz multiples of 5,FizzBuzz both
 *
 * Return: Always 0
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (1 % 15 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%i", i);
if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
