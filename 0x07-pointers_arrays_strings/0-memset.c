#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer of memory location
 * @b: value to be copied in memory block
 * @n: number of bytes
 * Return: pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
