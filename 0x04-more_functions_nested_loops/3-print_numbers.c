#include "main.h"

/**
 * print_numbers - prints number from 0-9
 */

void print_numbers(void)
{
	int i = 0;

	do {
		_putchar(i + '0');
		i++;
	} while (i < 10);

	_putchar('\n');
}
