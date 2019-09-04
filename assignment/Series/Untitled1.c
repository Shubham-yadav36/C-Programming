#include<stdio.h>
void main()
{
    double i,sum=0.0;
    int n;
    printf("Enter the number of Period : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum + 1/i;
    }

    printf("%f",sum);

    getch();
}
