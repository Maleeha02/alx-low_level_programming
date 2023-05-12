#include <stdio.h>
#include "main.h"
/**
 * main - Print the number of arguments passed into the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
