#include "main.h"

/**
 * _islower - checks if characters are in lower case.
 *
 * Rturn: 1 if character is lowercase and 0 if otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	else
		return (0);
	}
}
