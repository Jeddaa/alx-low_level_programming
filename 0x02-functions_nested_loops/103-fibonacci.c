#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * 
 * Return: Aways 0
 */

int main()
{
long int j = 1, i = 2, next, sum = 0;
for (int a = 1; a <= 50; a++)
{
if (j < 4000000 && j % 2 == 0)
{
sum += j;
}
next = j + i;
j = i;
i = next;
}
printf("%ld\n", sum);
return 0;
}
