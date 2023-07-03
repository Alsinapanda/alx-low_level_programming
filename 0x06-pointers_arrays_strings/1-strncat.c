#include "main.h"
/**
 * _strcat - concatenates two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n);
{
int i;
int s;
i = 0;
while (dest[i] != '\0')
{
i++;
}
s = 0;
while (s < n && src[s] != '\0')
{
dest[i] = src[s];
i++
s++
}
dest[i] = '\0';
return (dest);
}
