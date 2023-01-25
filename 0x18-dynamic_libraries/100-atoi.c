#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */

int _atoi(char *s)
{
unsigned int cnt = 0, size = 0, o = 0, p = 1, m = 1, i;
while (*(s + cnt) != '\0')
{
if (size > 0 && (*(s + cnt) < '0' || *(s + cnt) > '9'))
break;
if (*(s + cnt) == '-')
p *= -1;
if ((*(s + cnt) >= '0') && (*(s + cnt) <= '9'))
{
if (size > 0)
m *= 10;
size++;
}
cnt++;
}
for (i = cnt - size; i < cnt; i++)
{ o = o + ((*(s + i) - 48) * m);
m /= 10;
}
return (o * p);
}
