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
	int res = 0;
	int i;
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
			found = true;
			res = res * 10 + s[i] - '0';
		}
		else if (found)
		{
			break;
		}
	}
	if (sign % 2 != 0)
	{
		res = res * -1;
	}
	return (res);
}

