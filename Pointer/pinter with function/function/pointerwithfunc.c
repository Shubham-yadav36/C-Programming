#include<stdio.h>
void main()
{
    int a,b;
    void swap(int *,int *);
    printf("enter any  two number : ");
    scanf("%d%d",&a,&b);
    printf("a = %d\n b = %d\n",a,b);
    swap(&a,&b);
    printf("the value of a = %d \n b = %d",a,b);
}
void swap(int *x,int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;

}
