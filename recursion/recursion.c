/*Within a function body, if the function calls itself, the mechanism is known as
‘Recursion’ and the function is known as ‘Recursive function’. Now let us study this
mechanism in detail and understand how it works*/
#include<stdio.h>
int main()
{
    int i,k;
    int sum(int);
    printf("enter the number for addtion of natural no.  : ");
    scanf("%d",&i);
    k= sum(i);
    printf("%d",k);
}
int sum(int a)
{
    int s;
    if(a==1)
        return(a);
    s = a+sum(a-1);
        return(s);
}
