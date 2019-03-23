#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c;
    char op;
    printf("enter two number with operation: ");
    scanf("%f",&a);

    scanf("%c",&op);
    scanf("%f",&b);

    switch(op)
    {
    case'+':
        c=a+b;
        printf("the addition is: %f",c);
        break;
    case'-':
        c=a-b;
        printf("the substraction is: %f",c);
        break;
    case'/':
        c=a/b;
        printf("the division is :%f",c);
        break;
    case'*':
        c=a*b;
        printf("the multiply is : %f",c);
        break;

    default:
        printf("invalid operator");
        break;

    }
     getch();
}
