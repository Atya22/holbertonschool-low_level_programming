#include<stdio.h>
/**
*main - function that prints all the numbers
*of base 16 in lowercase
*
*Return: Always (0);
**/

int main(void)
{
int numbers;
char letters;
for (numbers = 48; numbers <= 57; numbers++)
{
putchar(numbers);
}
for (letters = 'a'; letters <= 'f'; letters++)
{
putchar(letters);
}
putchar('\n');
return (0);
}
