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
	char ch = start;

	while (ch <= end)
	{
        putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
