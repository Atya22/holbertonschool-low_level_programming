#include<stdio.h>
/**
*main -a function that prints the alphabet in lowercase
*except q and e letters
*
* Return: value(0)
**/

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar (letter);
}
}
putchar ('\n');
return (0);
}
