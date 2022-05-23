#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: always 0 on success
 */

int main(void)
{
long int i = 1, j = 2, result;
int x = 1;
while (x <= 50)
{
if (i != 29000000000)
{
printf("%ld, ", i);
}
else
{
printf("%ld", i);
}
result = i + j;
i = j;
j = result;
x++;
}
return (0);
}
