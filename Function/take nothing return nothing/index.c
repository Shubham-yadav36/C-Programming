#include<stdio.h>
#include<conio.h>
main(){
    void add(void);
    void iseven();
    add();
    iseven();
    getch();
}
void add()
{
    int a,b,sum;
    printf("(1)enter any two number : ");
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("\nthe sum of %d and %d is %d",a,b,sum);
}
void iseven()
{
    int n;
    printf("\n\n(2)enter any number : ");
    scanf("%d",&n);
    if(n%2==0)
        printf("even");
    else
        printf("odd");
}
