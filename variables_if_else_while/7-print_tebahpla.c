#include<stdio.h>
/**
*main - function that prints the lowwercase
*alphabet in reverse
*
*Return: always (0)
**/

int main(void)
{
char mirror;
for (mirror = 'z'; mirror >= 'a'; mirror--)
{
putchar(mirror);
}
putchar('\n');
return (0);
}
