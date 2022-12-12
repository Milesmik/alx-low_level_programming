#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char mike = 'a';

	while (mike <= 'z')
	{
		if ((mike != 'q') && (mike != 'e'))
		{
		putchar(mike);
		}
		mike++;
	}
	putchar('\n');
	return (0);
}
