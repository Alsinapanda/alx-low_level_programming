#include <stdio.h>

/**
 * main - Starting point
 *
 * Return: 0 (Success)
 */

int main(void)
{
int lower_case = 'a';
while (lower_case <= 'z')
{
if (lower_case == 'e' || lower_case == 'q')
{
lower_case += 1;
}
else
{
putchar(lower_case);
lower_case += 1;
}
}
putchar('\n');
return (0);
}
