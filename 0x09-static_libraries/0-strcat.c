#include"main.h"

/**
 * *_strcat - concatenates two strings.
 *
 * @dest: first pointer
 * @src: second pointer
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int c;
int c1;

c = 0;
while (dest[c])
c++;
for (c1 = 0; src[c1] != '\0'; c1++)
dest[c++] = src[c1];

return (dest);
}
