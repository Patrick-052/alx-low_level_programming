#include "main.h"

/**
 * print_alphabet - function that prints alphabet
 * in lower case followed by new line
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
