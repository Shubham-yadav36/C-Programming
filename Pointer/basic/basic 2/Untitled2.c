#include<stdio.h>
void main()
{
    int a= 5,*p;
    p = &a;
    *p=20;
    printf("the vlue of a : %d\n",a);
    printf("the vlue of p: %u\n",p);
    printf("the value of p= %d",*p);

    getch();
}
