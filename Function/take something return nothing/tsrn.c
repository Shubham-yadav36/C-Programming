#include<stdio.h>
#include<conio.h>
main(){
    int x;
    printf("enter any  number : ");
    scanf("%d",&x);
    void add(int);
    add(x); // actual variable
    getch();
}
void add(int a)  // formal variable : call by value
{
    if(a%2==0)
        printf("\nthe number %d is even",a);
    else
        printf("the number is odd");
}

