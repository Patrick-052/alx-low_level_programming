#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: character to be checked
 * Return: Always 0 (success0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
