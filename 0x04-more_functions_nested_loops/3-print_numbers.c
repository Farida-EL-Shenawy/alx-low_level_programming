/**
 * print_numbers - function prints numbers, from 0 to 9.
 *
 * Return: the numbers from 0 to 9.
 */

void print_numbers(void)
{

int num;

for (num = 0; num <= 9; num++)
{
_putchar(num + '0');
}
_putchar('\n');

}
