#include<stdio.h>
void main()
{
    int i=0,n,sum=0,tot=0;
    printf("how many time caluclate the sum of series : ");
    scanf("%d",&n);

    while(i!=n)
    {
        sum = 1 + 3*i;
        i++;
        tot=tot+sum;
    }
    printf("the sum is : %d",sum);
    getch();
}
