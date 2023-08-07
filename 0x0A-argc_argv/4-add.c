#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This is the entry point to the unction
 *
 * @argc: This counts the numnber of variables
 *
 * @argv: poonter to an array of variables
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y, sum = 0, num;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
			y++;
		}

		num = atoi(argv[x]);
		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}



