#include"main.h"

/**
 * _strlen - function returns the length of a string.
 *
 * @s: pointer
 *
 * Return: length of string
 */

int _strlen(char *s)
{

int len;

for (len = 0; *s != '\0'; s++)
++len;
return (len);
}
