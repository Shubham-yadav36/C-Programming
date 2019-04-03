void add();
#include<stdio.h>
void main()
{
    int adds;
    adds = add();

    printf("the addition of this number is : %d",adds);
    getch();
}
void add()
{
    int a,b;
    printf("enter any two number: ");
    scanf("%d%d",&a,&b);
    return(a+b);
}
