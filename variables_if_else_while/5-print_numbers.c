#include<stdio.h>
/**
*main - function that prints all single
*digit numbers of base 10 strarting from 0
*
*Return: always (0);
**/

int main(void)
{
int number;
for (number = '0'; number <= '9'; number++)
{
putchar(number);
}
putchar('\n');
return (0);
}
