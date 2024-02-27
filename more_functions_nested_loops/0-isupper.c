#include "main.h"
#include <stdio.h>
/**
*_isupper - a function that returns 1 if c is ippercase
*and returns 0 otherwise
*@c: int ref ASCII
*
*Return: Always 0.
*/

int _isupper(int c)
	{
		if (c >= 65 && c <= 90)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
