#include "main.h"

/**
 * _islower(int c) - checks if characters are in lower case.
 *
 * Return: 1 if character is lowercase and 0 if otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);

}
