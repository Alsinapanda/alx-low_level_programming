#include "main.h"

/**
 * rev_string - function that reverses a string
 * @f: pointer to string
 * Return: 0
 */

void rev_string(char *f)
{

int length, z, half;
char temp;

for (length = 0; f[length] != '\0'; length++)
z = 0;
half = length / 2;

while (half--)
{
temp = f[length - z - 1];
f[length - z - 1] = f[z];
f[z] = temp;
z++;
}
}
