#include <unistd.h>

#include "main.h"

/**
 * main - Entry point
 * Description: Write a program that prints _putchar, followed by a new line.
 * Return: Always 0 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
