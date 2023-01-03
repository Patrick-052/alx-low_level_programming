#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints the character to stdout
 * @c: the character to be printed
 * Return: 1 on success
 * on error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
