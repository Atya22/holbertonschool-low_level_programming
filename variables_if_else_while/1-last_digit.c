#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints a random number and states
*whether it is positive, negative, or zero.
*
*Return: always 0.
**/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if((n % 10) >5)
printf("Last digit of %d is and %d greater than 5\n", n, n % 10);
else if(n==0)
printf("Last digit of %d is and %d is 0\n", n, n %10);
else("Last digit of %d is and %d greater less than 6 and not 0\n", n, n % 10);
return (0);
}
