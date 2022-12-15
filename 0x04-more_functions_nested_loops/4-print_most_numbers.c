#include "main.h"

/**
 * print_most_numbers - prints most numbers
 * except number 2 and 4
 *
 * Description: print all number from 0 to 9, followed by a new line
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
