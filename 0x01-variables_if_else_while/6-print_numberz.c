#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0..
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	while (num < 10 && num >= 0)
	{
		num++;
		putchar(num);
	}
	putchar('\n');

	return (0);
}
