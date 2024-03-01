#include"main.h"

/**
*rev_string - function that reverses a string
*
*@s: string to be printed in reverse
*
*Return: Always 0.
*/

void rev_string(char *s)
{
	int j = 0;
	int lenght = 0;
	int k;

	while (s[lenght] != '\0' )
	{
		lenght++;
	}
	lenght--;
	while (j <= lenght / 2)
	{
		k = s[j];
		s[j] = s[lenght - j];
		s[lenght - j] = k;
		j++;
	}
}

	


