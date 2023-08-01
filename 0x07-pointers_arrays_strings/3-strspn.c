#include"main.h"

/**
 * _strspn - fills memory with a constant byte.
 *
 * @s: char
 * @accept: second char
 *
 * Return: number of bytes initial segment of s from only accept
 */

unsigned int _strspn(char *s, char *accept)
{

unsigned int i;
unsigned int j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != s[i]; j++)
{
if (accept[j] == '\0')
{
return (i);
}
}
}
return (i);
}
