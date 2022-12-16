#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: declared variable for digits 0-9.
 * Return: Always 1 if the number is digit, otherwise 0 (Success)
 */

int _isdigit(int c)
{
	if (c <= '0' && c >= '9')
		return (1);

	else
		return (0);
}
