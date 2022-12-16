#include "main.h"

/**
 * more_numbers - prints more numbers
 *
 *
 */

void more_numbers(void)
{
	int x;

	for (count = 0; count <= 9; count++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)

			_putchar((x / 10) + '0');

			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
