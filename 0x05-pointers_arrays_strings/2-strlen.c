#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: integer
 * Return: no return.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
