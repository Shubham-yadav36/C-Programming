#include<stdio.h>
void main()
{
    int fact=1,n=5;
    while(n>0)
    {
        fact = fact*n;
        n = n-1;
    }
    printf("%d",fact);
}
