#include<stdio.h>
void main()
{
    int x=5;
    printf("%d\n",x); // garbage value hold automatic storage class variable
    {
        int x=3;
        printf("%d\n",x);
    }
    printf("%d\n",x);
}
