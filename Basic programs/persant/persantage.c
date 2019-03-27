#include<stdio.h>

void main(){
    int a,b,v,c,x,sum;
    float avg;
    printf("\nenter the marks out of 100 : ");
    scanf("%d,%d,%d,%d,%d",&a,&b,&v,&c,&x);

    sum=(a+b+v+c+x)*100;
    avg=sum/500;
    printf("the persantage is : %f",avg);
    getch();

}
