#include <stdio.h>

/**
 * main - prints program name foollowed by new line.
 * @argc: counter for number of parameters
 * @argv: pointers for strings
 *
 * Return: 0
 */

int main(int argc, char const **argv)
{
(void) argc;
printf("%s\n", argv[0]);
return (0);
}
