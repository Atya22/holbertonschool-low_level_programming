#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*main - start point;
*@argc: argument count
*@argv: argument vector
*
*Return: 0
*/

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == -1)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
