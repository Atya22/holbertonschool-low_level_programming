#include "main.h"

/**
* print_last_digit - Prints the last digit of a number.
* @last: The number in question.
*
* Return: Value of the last digit.
*/

int print_last_digit(int last)
{
int j = last % 10;
if (j <0)
{
j = j * -1;
}
_putchar(j + '0');
return (j);
}
