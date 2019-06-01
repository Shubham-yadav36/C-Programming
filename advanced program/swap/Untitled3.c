
#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the two value : ");
    scanf("%d%d",&x,&y);

    void ptr1(int *,int *);
    ptr1(&x,&y);
    printf("the value of x = %d \n y = %d",x,y);
}
void ptr1(int *x,int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;

}
