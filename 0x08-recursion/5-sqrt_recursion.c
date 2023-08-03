#include"main.h"

/**
 * _sqrt_recursion - returns the square root of a given number.
 *
 * @n: input
 * @sq: square root
 *
 * Return: integer
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - returns the square root of a given number.
 *
 * @n: int to find square root
 * @sq: square root
 *
 * Return: integer
 */

int square(int n, int val)
{
if (val * val == n)
return (val);
else if (val * val < n)
return (square(n, val + 1));
else
return (-1);
}
