#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row=0;
    int collum=0;
    char symball='\0';
    printf("Enter the value of row = ");
    scanf("%d", &row);
    printf("Enter the value of collum = ");
    scanf("%d", &collum);
    printf("Enter the symbol= ");
     scanf(" %c", &symball);
     for( int i=0;i<row;i++)
        {

     for( int j=0;j<collum;j++)
     {printf("%c", symball);}


     printf("\n");}


    return 0;
}
