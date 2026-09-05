#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, sum = 0;

    for(i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}
