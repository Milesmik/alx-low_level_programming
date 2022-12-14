#include "main.h"

/** 
 * _islower - checks if haracters are in lower case.
 *
 * REturn: 1 if character is lowercase and 0 if otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
