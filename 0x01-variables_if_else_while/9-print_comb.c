#include <stdio.h>
/**
 * main - prints the possible combinations of single digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int j = '0';

	while (j <= '9')
	{
		putchar(j);
		if (j != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++j;
	}
	putchar('\n');
	return (0);
}
