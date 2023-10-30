#include <main.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @low: low band of n.
 * @high: high bank=d of n.
 * @mid: mid of n.
 * @n: the nth number.
 * @square: the square of n.
 * Return: square root or -1.
 */

int _sqrt_recursion(int n, int low, int high)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (low <= high)
	{
		int mid = (low + high) / 2;
		int square = mid * mid;

		if (square == n)
		{
			return (mid);
		}
		else if (square < n)
		{
			return (_sqrt_recursion(n, mid + 1, high));
		}
		else
		{
			return (_sqrt_recursion(n, low - 1));
		}
	}
	else
	{
		return (high);
	}
}
