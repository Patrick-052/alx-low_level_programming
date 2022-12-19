#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: string to be rev
 * Return: Always 0
 */
void rev_string(char *s)
{
	int left, i, temp;

	left = 0;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > left)
	{
		temp = s[i];
		s[i--] = s[left];
		s[left++] = temp;
	}
}
