#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9,
 * followed by a new line
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 && i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
