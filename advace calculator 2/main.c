#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    double num1;
    double num2;


    char op;
    printf("Enter the number =");
    scanf("%lf", &num1);
    printf("Enter the operator :");
    scanf(" %c", &op);
    printf("Enter the number :");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%f", num1+num2);
    }
    else if(op == '-'){
        printf("%f", num1-num2);
    }    else if(op == '*'){
        printf("%f", num1*num2);
    }    else if(op == '/'){
        printf("%f", num1/num2);
    }

    return 0;
}
