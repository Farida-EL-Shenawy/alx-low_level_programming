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

unsigned int;

for (i = 0; n > 0; i++, n--)
{
s[i] = b;
}
return (s);
