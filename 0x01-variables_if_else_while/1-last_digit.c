#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that print the last digit
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)
{
	int n;
	int result;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	result = n % 10;
	if (result > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, result);
	if (result == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	if (result < 6 && result != 0)
	       	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, result);
	return (0);
}
