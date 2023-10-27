#include "main.h"

/**
 * _pow_recursion - returns the value of
 * a number raised to the power of another.
 * @x: the number.
 * @y: the power.
 * Return: Returns the summation.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (_pow_recursion(int x, int y));
}
