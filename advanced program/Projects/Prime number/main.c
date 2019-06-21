#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("enter any number : ");
    scanf("%d",&n);
    for(i=2;i<=(n-1);i++)
    {
        if(n%i==0)
            break;
    }
    if(n==i)
        printf("the number %d is prime\n",n);
    else
        printf("the number %d is not prime ",n);
    getch();
}
