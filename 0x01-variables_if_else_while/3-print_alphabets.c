#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program prints the alpha in lower case
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char start = 'a';
	char end = 'z';
	char second = 'A';
	char third = 'Z';
	char chen = second;
	char ch = start;

	while (ch <= end)
	{
		putchar(ch);
		ch++;
	}
	while (chen <= third)
	{
		putchar(chen);
		chen++;
	}
	putchar('\n');
	return (0);
}
