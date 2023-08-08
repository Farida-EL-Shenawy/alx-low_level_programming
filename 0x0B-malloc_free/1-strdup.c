#include"main.h"

/**
 * *_strdup - creates chars array, and initializes it specific char.
 *
 * @str: char to initialize
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */

char *_strdup(char *str)
{
int i = 0;
int size = 0;
char *m;

if(str == NULL)
return (NULL);

for (; str[size] != '\0'; size++)
;

/*+1 on the size puts the end of string character*/
m = malloc(size * sizeof(*str) + 1);

if (m == 0)
return(NULL);
else
{
for (; i < size; i++)
m[i] = str[i];
}
return (m);
}
