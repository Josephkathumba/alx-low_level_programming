#include "main.h"

/**
 * print_most_numbers - prints single digit number
 * (neither 2 nor 4).
 * Return: no return.
 */

void print_most_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
if (i != 50 && i != 52)
_putchar(i);
}
_putchar('\n');
}
