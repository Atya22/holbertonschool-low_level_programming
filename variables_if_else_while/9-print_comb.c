#include<stdio.h>
/**
*main - function that prints all the numbers
*of base 16 in lowercase
*
*Return: Always (0);
**/

int main(void)
{
int number;
for (number = '0'; number <= '9'; number++)
{
putchar(number);
if ((number >= '0') && (number < '9'))
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
