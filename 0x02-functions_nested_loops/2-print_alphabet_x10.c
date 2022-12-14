#include "main.h"

/**
 * print_alphabet - Entry point
 * Deccription: function prints alphabets lowercasee.
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char x;

	while (count++ <=9)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
	
		_putchar('\n');
	}
}
