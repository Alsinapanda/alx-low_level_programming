#include <stdio.h>

/**
 * main - Starting point
 *
 * Return: 0 (Success)
 */
int main(void)
{
int lower_case = 'a';
int upper_case = 'A';
while (lower_case <= 'z')
{
putchar(lower_case);
lower_case += 1;
}
while (upper_case <= 'Z')
{
putchar(upper_case);
upper_case += 1;
}
putchar('\n');
return (0);
}
