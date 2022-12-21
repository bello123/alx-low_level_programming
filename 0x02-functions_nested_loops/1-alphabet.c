#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int z;

	for (z = 97; z <= 122; z++)
	{
		_putchar(z);
	}
	_putchar('\n');
}
