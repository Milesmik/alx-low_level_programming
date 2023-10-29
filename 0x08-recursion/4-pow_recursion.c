#include "main.h"

/**
 * _pow_recursion - returns the value of
 * a number raised to the power of another.
 * @x: base.
 * @y: exponent.
 * Return: value of the exponentiation
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);  
	else
		return (_pow_recursion(x, y));
}
