#include "main.h"

/**
 * main - prints the alphabet, in lowercase
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
