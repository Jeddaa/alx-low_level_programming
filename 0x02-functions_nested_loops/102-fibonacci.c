#include <stdio.h>

int main(void)
{
    long int i = 1, j = 2, result;
    for (int x = 1; x <= 50; x++)
    {
        if (i != 29000000000)
        {
            printf("%ld,", i);
        }
        else
        {
            printf("%ld,", i);
        }
        result = i + j;
        i = j;
        j = result;
    }


    return (0);
}