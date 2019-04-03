#include<stdio.h>
#include<conio.h>
int main(){
    int sum;
    int add();
    sum = add();
    printf("the addition is %d",sum);
    getch();
}
int add()
{
    int a,b,sum;
    printf("(1)enter any two number : ");
    scanf("%d%d",&a,&b);
    sum = a+b;
    return(sum);

}

