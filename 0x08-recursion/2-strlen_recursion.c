#include "main.h"

/**
 * strlen_recursion - returns the lenght of a string
 * @s: string
 * return: no return
 */

void strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		strlen_recursion(s + 1);
		_putchar(*s);
	}
}
