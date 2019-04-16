#include<stdio.h>
void main()
{
    typedef float result; // typedef is detatype decleation statement is define a special in exist detatype
    result sum;
    int a,b;
    printf("enter a number :");
    scanf("%d%d",&a,&b);

    sum = a+b;
    printf("the result is : %f",sum);
    getch();
}
