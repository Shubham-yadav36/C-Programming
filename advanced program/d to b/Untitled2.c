
#include<stdio.h>
#include<math.h>
void main()
{
    int bin=0,dec,i=1,rem,no;
    printf("enter a number is decimal: ");
    scanf("%d",&no);
    dec = no;

    while(dec!=0)
    {
        rem = dec%10;
        dec = dec/2;
        bin = bin + (rem*i);
        i = i*10;
    }
    printf("the decimal is : %d",bin);
}
