#include<stdio.h>

void main(){
    int a,b,v,c,x,sum;
    float avg;
    printf("\nenter the marks: ");
    scanf("%d,%d,%d,%d,%d",&a,&b,&v,&c,&x);

    sum=a+b+v+c+x;
    avg=sum/5;
    printf("the average is : %f",avg);
    getch();

}
