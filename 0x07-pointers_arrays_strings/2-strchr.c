#include"main.h"

/**
 * *_strchr - locates a character in a string.
 *
 * @s: char
 * @c: second char
 *
 * Return: a pointer to c in the string s, or NULL if not found
 */

char *_strchr(char *s, char c)
{

int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
