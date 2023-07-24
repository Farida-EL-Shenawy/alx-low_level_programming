#include"main.h"

/**
 * rev_string - a function that reverses a string.
 *
 * @s: pointer
 *
 * Return: void
 */

void rev_string(char *s)
{

int l;
int c;
char temp;

for (l = 0; s[l] != '\0'; ++l)
;
for (c = 0; c < l / 2; c++)
{
temp = s[c];
s[c] = s[l - 1 - c];
s[l - 1 - c] = temp;
}
}
