int factl(int);
#include<stdio.h>
int main()
{
    int n,fact;
    printf("enter any number : ");
    scanf("%d",&n);
    fact = factl(n);
    printf("%d",fact);

}
int factl(int a)
{
    int s,res;
    if(a==1)
        return(1);
    res = a*factl(a-1);
        return(res);

}
