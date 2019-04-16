#include<stdio.h>
void main()
{
    int a= 5,*p;
    p = &a;
    *p=20;
    printf("the vlue of a : %d",a);
    printf("the vlue of p: %u\n",p);

    getch();
}
