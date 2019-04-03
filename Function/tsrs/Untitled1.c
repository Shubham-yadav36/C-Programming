#include<conio.h>
#include<stdio.h>
void sum(int ,int);
void main()
{
    int x,y,s;

    printf("enter any two number:");
    scanf("%d%d",&x,&y);
    sum(x,y);
    getch();
}
void sum(int a,int b)
{
    int c;
    c = a+b;
    printf("the sum is %d",c);
}
