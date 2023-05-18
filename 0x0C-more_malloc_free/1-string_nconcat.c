#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - Function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes
 * Return: Pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int ls1, ls2, j, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;
	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;
	if (n > ls2)
		n = ls2;
	j = ls1 + n;
	s = malloc(j + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		if (i < ls1)
			s[i] = s1[i];
		else
			s[i] = s2[i - ls1];
	s[i] = '\0';
	return (s);
}
