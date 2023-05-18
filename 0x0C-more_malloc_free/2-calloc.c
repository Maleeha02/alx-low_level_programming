#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - Allocates memory for an array, using malloc
 * @nmemb: Number of elements
 * @size: Size of bytes
 * Return: Pointer to the allocated memory
 * if nmemb or size is 0, return NULL
 * if malloc fails, return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
