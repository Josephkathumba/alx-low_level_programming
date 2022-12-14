#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
char *bhstack;
char *pndle;
while (*haystack != '\0')
{
bhstack = haystack;
pndle = needle;
while (*haystack != '\0' && *pndle != '\0' && *haystack == *pndle)
{
haystack++;
pndle++;
}
if (!*pndle)
return (bhstack);
haystack = bhstack + 1;
}
return (0);
}
