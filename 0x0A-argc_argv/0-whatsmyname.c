#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);
	return (0);
}
