#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: pointer to destination
 */

char *_strcat(char *dest, char *src)
{
int i, z;
i = 0;
while (dest[i] != '\0')
{
i++;
}
z = 0;
while (src[z] != '\0')
{
dest[i] = src[z];
i++;
z++;
}
dest[i] = '\0';
return (dest);
}
