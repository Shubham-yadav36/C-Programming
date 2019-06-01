#include<stdio.h>
void main()
{
    int a,b,c,d;
    float tot,per;
    char gd;
    printf("enter the number of the 4 subject out of 100: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    tot = a+b+c+d;
    per = (tot *100)/400;
    printf("the total number is : %f\n",tot);
    printf("the persant is : %f\n",per);
    if(per>79.9)
        printf("the grade is Distiction");
    else if(per>=60 && per<=74.9)
        printf("the grade is Very good");
    else if(per>=50 && per<=59.9)
        printf("the grade is Good");
    else if(per>40 && per<=50.9)
        printf("the grade is Average");
    else
        printf("Fail");
        getch();


}
