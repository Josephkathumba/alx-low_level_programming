#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
unsigned int k, l, cnt;
if (n < 0)
{
_putchar(45);
k = n * -1;
}
else
{
k = n;
}
l = k;
cnt = 1;
while (l > 9)
{
l /= 10;
cnt *= 10;
}
for (; cnt >= 1; cnt /= 10)
{
_putchar(((k / cnt) % 10) + 48);   }
}
