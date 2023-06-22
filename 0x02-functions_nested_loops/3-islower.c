#include "main.h"

/**
 * _islower - Checks for lower_case character
 * @c: The character to be checked
 * Return: 1 - lower_case character 0 - Anything else
 */

int _islower(int c)

{
if (c >= 97 && c <= 122)
{

return (1);
}
return (0);
}
