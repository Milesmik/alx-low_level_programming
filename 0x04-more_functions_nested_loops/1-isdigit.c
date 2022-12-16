#include "main.h"
#include <stdlib.h>


/**
 * _isdigit - checks for a digit
 * @c: declared variable for digits 0-9
 * Return: Always 1 if the number is digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
