#include "main.h"
/**
 * print_most_numbers - Prints the numbers from 0 to 9 except 2 and 4
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= 9; num++)
	{
		if (c == '2' || c == '4')
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
