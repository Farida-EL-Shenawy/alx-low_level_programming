#include"main.h"

/**
 * *string_toupper - changes lowercase letters to uppercase.
 *
 * @str: string to return
 *
 * Return: str
 */

char *string_toupper(char *str)
{

char i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
return (str);
}
