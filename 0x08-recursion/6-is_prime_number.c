#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Function that states if a value is a prime number
 * or not
 * @n: The number to evaluate
 * Return: 1 if n is a prime number, 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Calculates whether a number is prime recursively
 * @n: Number to evaluate
 * @i: Iterator
 * Return: 1 if n is a prime, 0 if otherwise
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
