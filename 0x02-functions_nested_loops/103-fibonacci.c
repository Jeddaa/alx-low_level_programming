#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 *
 * Return: Aways 0
 */

int main(void)
{
long int j = 1, i = 2, next, sum = 0;
int a = 1;
while (a <= 50)
{
if (j < 4000000 && j % 2 == 0)
{
sum += j;
}
next = j + i;
j = i;
i = next;
a++;
}
printf("%ld\n", sum);
return (0);
}
