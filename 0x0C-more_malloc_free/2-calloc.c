#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *q;
unsigned int j;
if (nmemb == 0 || size == 0)
return (NULL);
q = malloc(nmemb * size);
if (q == NULL)
return (NULL);
for (j = 0; j < (nmemb * size); j++)
q[j] = 0;
return (q);
}
