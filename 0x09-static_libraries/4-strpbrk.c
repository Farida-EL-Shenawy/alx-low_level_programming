#include"main.h"

/**
 * _strpbrk - locates string s of any in the string accept
 *
 * @s: char
 * @accept: second char
 *
 * Return: a pointer to s that matches one in accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{

int i = 0;
int j;
char *p;

while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
p = &s[i];
return (p);
}
j++;
}
i++;
}
return (0);
}
