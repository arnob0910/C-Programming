#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result;

    result = add(5, 3);

    printf("Result = %d", result);

    return 0;
}
