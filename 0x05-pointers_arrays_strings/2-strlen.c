#include "main.h"

/**
 * _strlen - length of a string
 * @s: a pointer to an int tat will be changed/updated
 *
 * Return: void that means our answer is correct
 */

int _strlen(char *s)
{
int i = 0;

while (s[i])

i++;

return (i);
}
