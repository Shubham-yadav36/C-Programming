#include<stdio.h>
#include<math.h>
void main()
{
    int bin,dec = 0,i=0;
    printf("enter a number is binary : ");
    scanf("%d",&bin);

    while(bin)
    {
        dec = dec + pow(2,i)* (bin % 2);
        bin = bin/10;
        i++;
    }
    printf("the decimal is : %d",dec);
}
