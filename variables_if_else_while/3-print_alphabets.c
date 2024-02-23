#include<stdio.h>
/**
* main - prints alphabet in lowercase,
*and then in uppercase
*
* Return: always value(0).
**/

int main(void)
{
char upper_letter;
char lower_letter;
for (lower_letter = 'a'; lower_letter <= 'z'; lower_letter++)
{
putchar(lower_letter);
}
for (upper_letter = 'A'; upper_letter <= 'Z'; upper_letter++)
{
putchar(upper_letter);
}
putchar('\n');
return (0);
}

