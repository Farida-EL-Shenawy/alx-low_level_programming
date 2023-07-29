#include"main.h"
#include<stdio.h>

/**
 * isLower - to find lower leters
 *
 * @c: character
 *
 * Return: 0 or 1
 */

int isLower(char c)
{
return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - to determines whethere delimiters or not
 *
 * @c: character
 *
 * Return: 0 or 1
 */

int isDelimiter(char c)
{

int i;
char delimiter[] = " \t\n,;.!?\"(){}";

for (i = 0; i < 12; i++)
if (c == delimiter[i])
return (1);
return (0);
}

/**
 * *cap_string - function that capitalizes all words of a string.
 *
 * @s: character
 *
 * Return: char
 */

char *cap_string(char *s)
{
char *ptr = s;
int foundDelimit = 1;

while (*s)
{
if (isDelimiter(*s))
foundDelimit = 1;
else if (isLower(*s) && foundDelimit)
{
*s -= 32;
foundDelimit = 0;
}
else
foundDelimit = 0;
s++;
}
return (ptr);
}
