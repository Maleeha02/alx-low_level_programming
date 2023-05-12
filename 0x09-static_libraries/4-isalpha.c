#include "main.h"
/**
 * _isalpha - Function that checks for alphabetic characters
 * @c: Character to be checked
 * Return: 1 if c is a letter, 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
