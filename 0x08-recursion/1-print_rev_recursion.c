#include "main.h"
/**
 * _puts_recursion - prints reverse recursion
 * @s: character to be printed
 * Return: returns void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
