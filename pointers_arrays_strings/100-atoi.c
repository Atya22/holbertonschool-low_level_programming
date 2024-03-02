#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
/**
* _atoi -entry point,copys two strings
* @s: -points to value for input
*
* Return: 0
*/

int _atoi(char *s)
{
	unsigned int res = 0;
	int i;
	int final_res;
	int sign = 0;
	bool found = false;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = sign + 1;
		}
		else if (s[i] >= 48 && s[i] <= 57)
		{
			int current;

			found = true;
			current = s[i] - '0';
			res = res * 10 + current;
		}
		else if (found)
		{
			break;
		}
	}

	if (sign % 2 != 0)
	{
		final_res = res * -1;
	}
	else
	{
		final_res = res;
	}
	return (final_res);
}

