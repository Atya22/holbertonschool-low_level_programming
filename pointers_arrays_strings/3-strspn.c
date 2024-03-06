#include "main.h"

/**
*_strspn - function that gets the length of a prefix substring.
*@s: holds value
*@accept: holds value
*Return: always 0
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 65 || (s[i] > 90 && s[i] < 96) || s[i] > 122)
		{
			break;
		}
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
