/**
*char *_memcpy - function
*@dest:var
*@src:var
*@n:var
*Return: always 0.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src;
	}
}

