#include "main.h"
#include <stdio.h>
/**
* jack_bauer - print every minute of the day
*/
void jack_bauer(void)
{

int m;
int h;
for (h = 0; h <= 23; h++)
{
for (m = 0; m <= 59; m++)
{
putchar(h / 10 + '0');
putchar(h % 10 + '0');
putchar(58);
putchar(m / 10 + '0');
putchar(m % 10 + '0');
putchar('\n');
}
}
}
