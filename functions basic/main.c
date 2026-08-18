#include <stdio.h>
#include <stdlib.h>

void sayhi(void);

int main()
{
    printf("Top\n");
    sayhi();
    printf("Bottom\n");

    return 0;
}

void sayhi(void)
{
    printf("Hello User\n");
}
