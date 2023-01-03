#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to locate the character
 * @c: character to be located
 * Return: a pointer to the first occurence of the character c in
 * string s and null if character is not found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
