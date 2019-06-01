#include<stdio.h>
void main()
{
    int fact=1,n;
    printf("enter the number to calculate factorial : ");
    scanf("%d",&n);
    while(n>0)
    {
        fact = fact*n;
        n = n-1;
    }
    printf("%d",fact);
    getch();
}
