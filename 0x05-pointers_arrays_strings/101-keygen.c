#include <stdio.h>
#include<stdlib.h>
#include<time.h>

/**
*main - A program that generates random valid passwords
*
*Return: Always 0 (Success)
*/

int main(void)
{

int sum;
char c;

srand(time(NULL));
while (sum <= 2456)
{
c = rand() % 128;
sum += c;
putchar(c);
}
putchar(2772 - sum);
return (0);
}

