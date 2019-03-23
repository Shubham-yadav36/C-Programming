#include<stdio.h>

void main()
{
    int x,op;
    printf("enter any number : ");
    scanf("%d",&x);


    printf("\nenter 1 for Square");
    printf("\nenter 2 for Cube");
    printf("\nenter 3 for Square-root");
     printf("\nenter operation you want to do : ");
    scanf("%d",&op);

    switch(op)
    {
        case 1:
            printf("the square of the %d is %d",x,x*x);
            break;
        case 2:
            printf("the cube of the of the %d is %d",x,x*x*x);
            break;
        case 3:
            printf("the Suare-root of the of the %d is %d",x,sqrt(x));
            break;
        default:
            printf("enter invalid choice");

    }
    getch();
}
