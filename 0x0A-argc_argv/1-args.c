#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: counter for number of parameters
 * @argv: pointers for strings
 *
 * Return: 0
 */

int main(int argc, char *argv[]__attribute((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
