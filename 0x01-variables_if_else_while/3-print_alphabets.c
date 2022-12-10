#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mike;

	for (mike = 'a'; mike <= 'z'; mike++)
	{
		putchar(mike);
	}
	for (mike = 'A'; mike <= 'Z'; mike++)
	{
		putchar(mike);
	}
	{
		putchar('\n');
	}
	return (0);
}
