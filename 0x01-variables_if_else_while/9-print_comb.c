#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints all possible combinations of single-digit numbers.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n1 = 0;
	int n2 = ',';
	int n3 = ' ';

	while (n1 < 12)
	{
	if (n1 == 10)
	{
		n1++;
		break;

		putchar(n1);
		putchar(n2);
		putchar(n3);
		n1++;

		putchar('\n');
	}
	}
	return (0);
}
