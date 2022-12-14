#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @x: number to check
 * Return: The last digit of x
 */
int print_last_digit(int x)
{
	int lastDigit;

	if (x < 0)
	{
		lastDigit = -1 * (x % 10);
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		lastDigit = x % 10;
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
