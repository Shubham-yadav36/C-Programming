#include<stdio.h>
void main()
{
    int a= 5,*p;
    p = &a;
    printf("the address of a is by pointer :  %d\n",p);
    printf("the address of a is :  %d\n",&a);
    printf("the address of a is :  %d\n",*p);
    printf("the address of a is :  %d\n",p);
    printf("the value of a is :  %d\n",*&a);
    printf("the value of a is by pointer : %d \n",*p);
    printf("the value of a is : %d",a);
    getch();
}
