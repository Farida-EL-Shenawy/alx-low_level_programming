#include"main.h"

/**
 * *_memset - fills memory with a constant byte.
 *
 * @s: char
 * @b: second char
 * @n: unsigned int
 *
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{

int i;
s = &n;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
