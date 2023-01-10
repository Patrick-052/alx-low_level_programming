#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	(void)argv;
	printf("%d\n", (argc - 1));

	return (0);
}
