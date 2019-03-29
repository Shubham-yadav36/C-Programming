#include<stdio.h>
#include<conio.h>
main(){
    int x,y;
    printf("enter any two number : ");
    scanf("%d%d",&x,&y);
    void add(int,int);
    add(x,y); // actual variable
    getch();
}
void add(int a,int b)  // formal variable : call by value
{
    int sum;

    sum = a+b;
    printf("\nthe sum of %d and %d is %d",a,b,sum);
}

