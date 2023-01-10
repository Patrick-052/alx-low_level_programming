#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply
 * @argc: argument count
 * @argv: number of arguments compiled
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i;
	int mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul = (atoi(argv[i]) * atoi(argv[(i - 1)]));
	}
	printf("%d\n", mul);

	return (0);
}
