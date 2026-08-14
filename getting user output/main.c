#include <stdio.h>
#include <stdlib.h>

int main()
{
int age;
double gpa ;
char grade;
char name[20];
printf("Enter your age :");
scanf("%d", &age);
printf ("you are %d years old\n",age)  ;
printf("Enter your gpa:");
scanf("%lf",&gpa);
printf ("your gpa is  %f\n",gpa)  ;
printf("Enter your grade :");
scanf(" %c", &grade);
printf ("your grade is %c\n ",grade);

printf("Enter your name: ");
getchar();
fgets(name,20,stdin);
printf("Your name is %s",name);
    return 0;
}
