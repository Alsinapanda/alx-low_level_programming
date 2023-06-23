#include <stdio.h>
#include "main.h"

/**
 * main - Starting point
 *
 * Fizz-Buzz - prints the numbers 1 - 100 and \n
 * Fizz for multiples of 3, Buzz for multiples of 5
 * FizzBuzz for multiples of both
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
	printf("FizzBuzz");
else if (i % 3 == 0)
	printf("Fizz");
else if (i % 5 == 0)
	printf("Buzz");
else
	printf("%i", i);
if (i < 100)
	printf(" ");
}
printf("\n");
return (0);
}
