#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 * Return: Success 1
 * On error, -1 returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
