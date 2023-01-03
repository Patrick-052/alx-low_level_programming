#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to be copied into
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];

	return (dest);
}
