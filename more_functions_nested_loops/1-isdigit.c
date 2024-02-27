#include "main.h"
/**
*_isdigit - Returns 1 if c is a digit otherwisw 0
*@c: int ref ASCII
*
*Return: Always 0.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
