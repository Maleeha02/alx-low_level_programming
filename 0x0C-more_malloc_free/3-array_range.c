#include "main.h"
#include <stdlib.h>
/**
 * *array_range - Creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 * Return: Pointer to the newly created array
 * if min > max, return NULL
 * if malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(*ar) * ((max - min) + 1));
	if (ar == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		sr[i] = min;
	return (ar);
}
