#include "main.h"
/**
 * puts2 - prints a string, followed by a new linw,
 * @str: pointer to the string to print
 * Return: void
 */

void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putcar(str[i);
}
i++
}
_putchar('\n');
}
