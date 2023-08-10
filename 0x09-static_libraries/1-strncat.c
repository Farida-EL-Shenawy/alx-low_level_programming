#include "main.h"
/**
 * *_strncat - a function that concatenates two strings.
 *
 * @dest: first pointer
 * @src: second pointer
 *
 * @n: input
 * Return: a pointer to the resulting string dest
 */


char *_strncat(char *dest, char *src, int n)
{

int i;
int j;

i = 0;
while (dest[i])
i++;
for (j = 0; j < n && src[j] != '\0'; j++)
dest[i + j] = src[j];
dest[i + j] = '\0';
return (dest);

}
